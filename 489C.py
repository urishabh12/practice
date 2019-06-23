m,s=map(int,input().split())
s1=s
if m==1 and s==0:
    print(0, 0)
    exit()
if s==0 or s>9*m:
    print(-1, -1)
    exit()
if s==1:
    print(1*10**(m-1),1*10**(m-1))
    exit()
ans=1*(10**(m-1))
s-=1
i=0
while s:
    if s<=9:
        ans+=s*(10**i)
        s-=s
    else:
        ans+=9*(10**i)
        i+=1
        s-=9
ans2=0
i=m-1
while s1:
    if s1<=9:
        ans2+=s1*(10**i)
        s1-=s1
    else:
        ans2+=9*(10**i)
        s1-=9
        i-=1
print(ans,ans2)