n=int(input())
a=[int(x) for x in input().split()]
s=sum(a)
q=sorted(a)
h1=q[-1]
h2=q[-2]
ans=[]
for i in range(n):
    d=a[i]
    if a[i]==h1:
        h=h2
    else:
        h=h1
    if s-a[i]-h == h:
        ans.append(i+1)
print(len(ans))
print(*ans)