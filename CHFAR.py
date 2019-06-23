for _ in range(int(input())):
    n,k=map(int,input().split())
    l=[int(x) for x in input().split()]
    count=0
    for i in range(len(l)):
        if l[i]!=1:
            l[i]=1
            count+=1
        if count>k:
            break
    if count<=k:
        print('YES')
    else:
        print('NO')