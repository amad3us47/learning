import wget
import os
import subprocess

with open("all.txt", encoding="utf8") as file:
   for line in file:
        line = line.strip()
        if not line:
            continue

        try:
            wget.download("https://amad3us47.github.io/data/" + line, out=line)
        except Exception:
            continue  # Skip if download fails

        # Run nuclei and capture stderr
        result = subprocess.run(
            ["./nuclei", "-u", "https://developers.afterpay.com", "-silent", "-sresp", "-t", line],
            capture_output=True,
            text=True
        )

        # If [FTL] error, print only the template file name
        if "[FTL]" in result.stderr:
            print(line)

        # Cleanup
        try:
            os.remove(line)
        except Exception:
            pass
 
