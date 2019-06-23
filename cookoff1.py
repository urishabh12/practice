for _ in range(int(input())):
    n,k=map(int,input().split())
    l=[int(x) for x in input().split()]
    addstair=0
    for i in range(len(l)-1):
        if i==0:
            if l[i]-0>k:
                addstair+=(l[i]-0)//k

        if l[i+1]-l[i]>k:
            addstair+=(l[i+1]-l[i])//k
    
    print(addstair)                        