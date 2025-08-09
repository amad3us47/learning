import wget
import os
import subprocess

log_file = open("output.log", "w", encoding="utf-8")  # log everything here

with open("all.txt", encoding="utf8") as file:
    for line in file:
        line = line.strip()
        if not line:
            continue

        url = "https://amad3us47.github.io/data/" + line

        try:
            filename = wget.download(url, out=line)
            log_file.write(f"\nDownloaded: {filename}\n")
            print(f"\nDownloaded: {filename}")
        except Exception as e:
            log_file.write(f"\nDownload failed for {line}: {e}\n")
            print(f"\nDownload failed for {line}: {e}")
            continue

        log_file.write(f"Using {line} template\n")
        print(f"Using {line} template")

        # Run nuclei and capture output
        try:
            result = subprocess.run(
                ["./nuclei", "-u", "https://developers.afterpay.com", "-o", "bugs.txt", "-silent", "-sresp", "-t", line],
                capture_output=True,
                text=True
            )
            log_file.write(result.stdout)
            log_file.write(result.stderr)
            print(result.stdout)
            print(result.stderr)
        except Exception as e:
            log_file.write(f"Error running nuclei for {line}: {e}\n")
            print(f"Error running nuclei for {line}: {e}")

        # Remove file
        try:
            os.remove(line)
        except Exception as e:
            log_file.write(f"Error deleting {line}: {e}\n")
            print(f"Error deleting {line}: {e}")

log_file.close()
e
