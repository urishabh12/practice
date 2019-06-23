s=input()
s=s[1:-1]
l=[]
for i in range(0,len(s),3):
    if s[i] not in l:
        l.append(s[i])
print(len(l))