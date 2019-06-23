n,k=map(int,input().split())
a=[0]*((2*10)^5)
s=[]
m=[x for x in range(0,2*(10^5))]
for i in input().split():
    s.append(int(i))
    a[int(i)]+=1
while True:
    count=0
    for i in range(2*(10^5)):
        if a[i]>a[i+1]:
            a[i],a[i+1]=a[i+1],a[i]
            m[i],m[i+1]=m[i+1],m[i]
            count=1
    if count==0:
        break
m=m[::-1]
s=s[::-1]
m=m[:k]
s=s[:k]
for i in range(len(m)-1):
    if s[i]//2>=s[i+1]:
        m=m[:i]+m[i:i+1]+m[i:i+1]+m[i+1:-1]
print(*m)