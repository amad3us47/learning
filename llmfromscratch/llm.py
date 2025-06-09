import re
with open("verdict.txt","r",encoding="utf-8") as f:
    raw_text=f.read()
print("Total characters are:",len(raw_text))
#print(raw_text[:-1])

result=re.split(r'([,.:;?_!()]|--|\s)',raw_text)
result=[item for item in result if item.strip()]
all_words=sorted(set(result))
vocab_size=len(all_words)
 
vocab={token:integer for integer,token in enumerate(all_words)}
for i,item in enumerate(vocab.items()):
    print(item)
    if i>=50:
        break
