for _ in range(int(input())):
    n=int(input())
    l=[int(x) for x in input().split()]
    k=[[]]*10
    repeat=[]
    flag=0
    for i in range(len(l)):
        ind=l[i]%10
        if l[i] not in k[ind]:
            if k[ind]==[]:
                k[ind]=[]
            k[ind].append(l[i])
        else:
            repeat.append(l[i])
    for i in repeat:
        index=[]
        for p in range(len(l)):
            if l[p]==i:
                index.append(p+1)
        for q in range(len(index)):
            for z in range(q+1,len(index)):
                val1=index[q]%10
                val2=index[z]%10
                if index[q] in k[val1] and index[z] in k[val2]:
                    print("Truly Happy")
                    flag=1
                    break
    if flag==0:
        print('Poor Chef')                