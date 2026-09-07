"""
h1_by_id.py — sweep HackerOne report IDs and grab every PUBLIC/disclosed one.

For each id it fetches https://hackerone.com/reports/{id}.json and, if the
report is public, records: program, title, link, upvotes, bounty, vuln_type, date.

Usage:
    pip install requests
    python3 h1_by_id.py --start 1 --end 3782701
    # resumable: stop anytime (Ctrl-C), re-run same command, it continues.

Reality check (read this):
    The newest id is ~3,782,701, but the VAST majority of ids are private and
    return nothing usable. Sweeping the whole range is millions of requests and
    will take many days even at a fast pace. Run it in chunks (--start/--end),
    leave it going over time, or point it at a recent range you care about.
    This method is the most *complete* (finds everything public) but also the
    most wasteful. The Hacktivity GraphQL approach is far fewer requests if you
    only need disclosed reports.
"""
import csv, json, os, time, argparse
import requests

FIELDNAMES = ["program", "title", "link", "upvotes", "bounty", "vuln_type", "date"]

def is_public_report(j):
    """A disclosed/public report has these; private ones return errors/minimal json."""
    if not isinstance(j, dict):
        return False
    # 'public' true and a disclosed_at timestamp are the reliable signals
    return bool(j.get("public")) and bool(j.get("disclosed_at")) and bool(j.get("title"))

def extract(j):
    url = j.get("url", "")
    link = url.replace("https://", "") if url else ""
    ts = j.get("disclosed_at") or ""
    bounty = 0.0
    if j.get("has_bounty?"):
        try: bounty = float(j.get("bounty_amount") or 0)
        except (TypeError, ValueError): bounty = 0.0
    return {
        "program":   (j.get("team") or {}).get("profile", {}).get("name", ""),
        "title":     j.get("title", ""),
        "link":      link,
        "upvotes":   int(j.get("vote_count") or 0),
        "bounty":    bounty,
        "vuln_type": (j.get("weakness") or {}).get("name", "") if j.get("weakness") else "",
        "date":      ts[:10] if ts else "",
    }

def fetch(session, rid):
    """Return (status, json_or_None). status: 'ok','private','missing','ratelimited','error'."""
    url = f"https://hackerone.com/reports/{rid}.json"
    try:
        r = session.get(url, timeout=20)
    except Exception:
        return "error", None
    if r.status_code == 429:
        return "ratelimited", None
    if r.status_code in (401, 403):
        return "private", None
    if r.status_code == 404:
        return "missing", None
    if r.status_code != 200:
        return "error", None
    try:
        return "ok", r.json()
    except ValueError:
        return "error", None

def load_state(path):
    if os.path.exists(path):
        with open(path) as f:
            return int(f.read().strip() or 0)
    return 0

def save_state(path, rid):
    with open(path, "w") as f:
        f.write(str(rid))

def append_row(csv_path, row, write_header):
    with open(csv_path, "a", newline="", encoding="utf-8") as f:
        w = csv.DictWriter(f, fieldnames=FIELDNAMES)
        if write_header:
            w.writeheader()
        w.writerow({k: row.get(k, "") for k in FIELDNAMES})

def main(a):
    session = requests.Session()
    session.headers.update({"User-Agent": "personal-research-script",
                            "Accept": "application/json"})
    last_done = load_state(a.state_file)
    start = max(a.start, last_done + 1) if last_done >= a.start else a.start
    write_header = not os.path.exists(a.output_csv)
    print(f"Sweeping ids {start}..{a.end} (resume point {last_done})")

    found = 0
    for rid in range(start, a.end + 1):
        # retry the SAME id on rate-limit so nothing is skipped
        while True:
            status, j = fetch(session, rid)
            if status == "ratelimited":
                print(f"  {rid}: rate limited, backing off 60s")
                time.sleep(60)
                continue
            break
        if status == "ok" and is_public_report(j):
            row = extract(j)
            append_row(a.output_csv, row, write_header)
            write_header = False
            found += 1
            print(f"  {rid}: {row['date']}  {row['title'][:55]}  (found {found})")
        save_state(a.state_file, rid)
        time.sleep(a.sleep)
    print(f"Done ids {start}..{a.end}. Public reports found this run: {found}")

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument("--start", type=int, default=1)
    p.add_argument("--end", type=int, default=3782701)
    p.add_argument("--sleep", type=float, default=0.5)
    p.add_argument("--output-csv", default="h1_by_id.csv")
    p.add_argument("--state-file", default="h1_by_id.state")
    main(p.parse_args())
