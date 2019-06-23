n=int(input())
a,b=[],[]
for i in range(n):
    i,j=map(int,input().split())
    a.append(i)
    b.append(j)
z=sorted(zip(a,b))
l=[z[0][1]]
for i in range(1,len(z)):
    if z[i][1]>=l[i-1]:
        l.append(z[i][1])
    else:
        l.append(z[i][0])
print(l[-1])