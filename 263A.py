l1=[]
i=0
for k in range(5):
    i+=1
    l=[int(x) for x in input().split()]
    if 1 in l:
        l1=l[:]
        break
j=l1.index(1)+1
ans=abs(3-i)+abs(3-j)
print(ans)