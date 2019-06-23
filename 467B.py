n,m,k=map(int,input().split())
l=[]
for i in range(m+1):
    l.append(int(input()))
friend=0
for i in range(m):
    count=0
    diff=l[i]^l[-1]
    bn=bin(diff)
    bn=bn[2:]
    for i in range(len(bn)):
        if bn[i]=='1':
            count+=1
    if count<=k:
        friend+=1
print(friend)