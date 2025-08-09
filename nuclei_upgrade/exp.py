import requests
import os
import wget
import urllib
import time
with open("all.txt", encoding="utf8") as file:
    words = file.read().split()  # Read all words and split by spaces

for line in words[1:40000]:
    try:
        wget.download("https://amad3us47.github.io/data/"+line)
        #print(line)
        #print("----------------------------------------------------------------------------------------")
        #print("using "+ line+" template")
        os.system("./nuclei -u app-updates.agilebits.com -silent -s high,critical -t "+line)
        directory=os.getcwd()
        line=line.rstrip('\n')
        os.remove(directory+"/"+line)
    except urllib.error.URLError:
        time.sleep(5)

