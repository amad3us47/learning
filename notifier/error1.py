import wget
import os
import subprocess

with open("all.txt", encoding="utf8") as file:
    for line in file:
        line = line.strip()
        if not line:
            continue
       
        # Download the template
        url = "https://amad3us47.github.io/data/" + line
        try:
            wget.download(url)
        except Exception as e:
            continue  # skip this line on download error

        # Run nuclei and capture error output
        try:
            result = subprocess.run(
                ["./nuclei", "-u", "https://developers.afterpay.com", "-silent", "-sresp", "-t", line],
                capture_output=True,
                text=True
            )

            # Check for [FTL] error in stderr
            if "[FTL]" in result.stderr:
                print(f"[FTL ERROR] Template: {line}")

        except Exception as e:
            print(f"[EXCEPTION] While running template {line}: {e}")

        # Delete the template file
        try:
            os.remove(line)
        except Exception:
            pass
 
