import requests
def update_download(url):
    r=requests.get(url,allow_redirects=True)
    open('new.txt','wb').write(r.content)
