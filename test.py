import requests
import json
import time

URL = "https://hackerone.com/graphql"

QUERY = """
query HacktivitySearchQuery($queryString: String!, $from: Int, $size: Int, $sort: SortInput!) {
  search(
    index: CompleteHacktivityReportIndex
    query_string: $queryString
    from: $from
    size: $size
    sort: $sort
  ) {
    total_count
    nodes {
      ... on HacktivityDocument {
        _id
        severity_rating
        cwe
        cve_ids
        reporter { username name }
        report {
          _id
          title
          substate
          url
          disclosed_at
        }
        team { handle name url }
        total_awarded_amount
        votes
        submitted_at
        disclosed
      }
    }
  }
}
"""

HEADERS = {
    "Content-Type": "application/json",
    "Accept": "*/*",
    "User-Agent": "Mozilla/5.0",
}

def fetch_page(from_index, size=25):
    payload = {
        "operationName": "HacktivitySearchQuery",
        "query": QUERY,
        "variables": {
            "queryString": "disclosed:true",
            "from": from_index,
            "size": size,
            "sort": {"field": "latest_disclosable_activity_at", "direction": "DESC"},
        },
    }
    r = requests.post(URL, headers=HEADERS, data=json.dumps(payload), timeout=30)
    r.raise_for_status()
    data = r.json()
    if "errors" in data:
        print("GraphQL errors:", json.dumps(data["errors"], indent=2))
    return data

def fetch_all(max_records=200, page_size=25, delay=1.0):
    results = []
    frm = 0
    while frm < max_records:
        data = fetch_page(frm, page_size)
        search = data.get("data", {}).get("search")
        if not search:
            break
        nodes = search["nodes"]
        if not nodes:
            break
        for n in nodes:
            rep = n.get("report") or {}
            results.append({
                "id": n.get("_id"),
                "report_id": rep.get("_id"),
                "title": rep.get("title"),
                "url": rep.get("url"),
                "state": rep.get("substate"),
                "severity": n.get("severity_rating"),
                "cwe": n.get("cwe"),
                "cve_ids": n.get("cve_ids"),
                "team": (n.get("team") or {}).get("name"),
                "reporter": (n.get("reporter") or {}).get("username"),
                "bounty": n.get("total_awarded_amount"),
                "votes": n.get("votes"),
                "disclosed_at": rep.get("disclosed_at"),
            })
        print(f"Fetched {len(results)} / total_count {search['total_count']}")
        frm += page_size
        time.sleep(delay)
    return results

if __name__ == "__main__":
    reports = fetch_all(max_records=100000)
    with open("hackerone_disclosed.json", "w") as f:
        json.dump(reports, f, indent=2)
    print(f"Saved {len(reports)} reports to hackerone_disclosed.json")
