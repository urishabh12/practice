for _ in range(int(input())):
    n=int(input())
    l=[int(x) for x in input().split()]
    top=0
    reservoirs=0
    case=0
    for i in range(n-1):
        if case==0:
            top=l[i]
        if i==0 and l[i+1]<l[i]:
            rservoirs+=1
            case=1
            top=l[i]
        elif l[i+1]>top:
            case=1
            if i>(n-2):
                if l[i+2]>l[i+1]:
                    if i>(n-3):
                        if l[i+3]<l[i+2]:
                            reservoirs+=1
                        continue
            top=l[i]
            reservoirs+=1
    print(reservoirs)   