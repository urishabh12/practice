n,m,a,b=map(int, input().split())
if b/m<float(a):
    cost=(b*(n//m))
    if b<(n%m)*a:
        cost+=b
    else:
        cost+=(n%m)*a
else:
    cost=a*(n)
print(cost)