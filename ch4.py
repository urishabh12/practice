import requests
from bs4 import BeautifulSoup
url = 'https://www.ofs.edu.sg'
r = requests.get(url, allow_redirects=False)
soup = BeautifulSoup(r.content, 'html.parser')
soup=str(soup)
cnt=0
for i in range(len(soup)-2):
    if soup[i]=='O' and soup[i+1]=='F' and soup[i+2]=='S':
        cnt+=1
print(cnt)