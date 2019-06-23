n=int(input())
a=[int(x) for x in input().split()]
b=[int(x) for x in input().split()]
a=a[1:]
b=b[1:]
l=[]
for i in a:
    if i not in l:
        l.append(i)

for i in b:
    if i not in l:
        l.append(i)

if len(l)==n:
    print('I become the guy.')
else:
    print('Oh, my keyboard!')