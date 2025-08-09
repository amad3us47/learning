import wgt
import time
import os
for line in open("all.txt",encoding="utf8").readlines():
    wget.download("https://amad3us47.github.io/data/"+line)
    print("using "+line+"template")
    os.system("./nuclei -u developers.afterpay.com -o bugs.txt -silent -sresp -t "+line)
    directory=os.getcwd()
    line=line.rstrip('\n')
    os.remove(directory+"/"+line)e
