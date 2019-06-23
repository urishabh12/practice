n,s,t=map(int,input().split())
p=[int(x) for x in input().split()]
for i in range(n):
    if s==t:
        print(i)
        exit()
    s=p[s-1]
print(-1)