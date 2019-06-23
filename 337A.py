n,m=map(int,input().split())
l=[int(x) for x in input().split()]
l.sort()
for i in range((m-n)+1):
    temp=l[i+(n-1)]-l[i]
    if i==0:
        diff=temp
    if temp<diff:
        diff=temp
print(diff)
