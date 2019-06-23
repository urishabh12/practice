for _ in range(int(input())):
    l=[int(x) for x in input().split()]
    ans=(l[0]+l[1])//l[2]
    if ans%2==0:
        print("CHEF")
    else:
        print("COOK")    