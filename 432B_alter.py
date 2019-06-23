n=int(input())
a=[0]*n
c=[0]*100001
for i in range(n):
    s,a[i]=map(int,input().split())
    c[s]+=1
for i in range(n):
    print((n-1) + c[a[i]] , (n-1) - c[a[i]])