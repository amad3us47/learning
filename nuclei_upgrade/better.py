import requests
import os
import time
import socket

# Check internet connection before starting
def internet_available(host="8.8.8.8", port=53, timeout=3):
    try:
        socket.setdefaulttimeout(timeout)
        socket.socket(socket.AF_INET, socket.SOCK_STREAM).connect((host, port))
        return True
    except socket.error:
        return False

# Wait for internet connection before proceeding
while not internet_available():
    print("No internet connection. Retrying in 10 seconds...")
    time.sleep(10)

# Read the input list of filenames
with open("all.txt", encoding="utf8") as file:
    words = file.read().split()

# Loop over the desired range of entries
for line in words[9025:46813]:
    line = line.strip()
    url = f"https://amad3us47.github.io/data/{line}"

    try:
        # Attempt to download the template
        response = requests.get(url, allow_redirects=True, timeout=10)
        response.raise_for_status()

        # Save the file locally
        with open(line, 'wb') as f:
            f.write(response.content)

        # Run the nuclei scan using the downloaded template
        os.system(f'./nuclei -u www.deeplearning.ai -o find.txt -silent 2>/dev/null -sresp -t "{line}"')
        #os.system(f'./nuclei -u www.deeplearning.com -o find.txt -silent -sresp -t "{os.path.abspath(line)}"')

        # Clean up: remove the template file
        os.remove(os.path.abspath(line))

    except requests.exceptions.RequestException as e:
        print(f"[!] Network or HTTP error for {url}: {e}. Retrying in 5s...")
        time.sleep(5)

    except Exception as e:
        print(f"[!] Unexpected error at \033[92m{line}\033[0m: {e}. Continuing...\n")
        time.sleep(1)
q
