import requests
url = "https://amad3us47.github.io/data/0example.yaml"
r = requests.get(url, allow_redirects=True)
open('example.yaml', 'wb').write(r.content)

