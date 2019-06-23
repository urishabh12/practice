l=[int(x) for x in input().split()]
l=l[1:]
for i in l:
    if i==l[-1]:
        print(1,2**i,end='')
        exit()
    print(1,2**i,end=' ')