p,q,l,r=map(int,input().split())
x,z=[False]*1001,[False]*1001
count=0
for i in range(p):
    m,n=map(int,input().split())
    z[m:n+1]=[True]*((n+1)-m)
for i in range(q):
    m,n=map(int,input().split())
    x[m:n+1]=[True]*((n+1)-m)
li= [1 for i in range(l,r+1) if any(True for j in range(1001-i) if z[i+j] and x[j] ) ]
print(sum(li))