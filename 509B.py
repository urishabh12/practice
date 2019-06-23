n,k=map(int,input().split())
highest,lowest=0,101
a=[]
for i in input().split():
    i=int(i)
    a.append(i)
    if i>highest:
        highest=i
    if i<lowest:
        lowest=i
if highest-lowest>k:
    print('NO')
    exit()
print('YES')
m=highest-k
if m<0:
    m=0
for i in a:
    if i<=m:
        print(*[1 for x in range(m)])
    else:
        if m>0:
            print(*[1 for x in range(m)],end=' ')
        print(*[x for x in range(1,(i-m)+1)])