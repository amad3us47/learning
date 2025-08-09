import requests
def data_download(url,file):
    for line in open(file,encoding="utf8").readline():
        r=requests(url+line,allow_redirects=True)
        open(file,'wb').write(r.content)

