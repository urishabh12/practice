n=input()
a=[]
s=0
for i in input().split():
    i=int(i)
    a.append(i)
    s+=i
w=0
if not s%3:
  s=s/3
  t=s*2
  u,g=0,0
  for x in a[:-1]:
    u+=x
    if u==t:
      w+=g
    if u==s:
      g+=1
print(w)