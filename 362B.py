n,m=map(int,input().split())
if m==0:
    print('YES')
    exit()
d=[int(x) for x in input().split()]
d.sort()
if d[0]==1 or d[-1]==n:
    print('NO')
    exit()
count=0
for i in range(1,m):
    if d[i-1]+1==d[i]:
        count+=1
    else:
        count=0
        continue
    if count==2:
        print('NO')
        exit()
print('YES')