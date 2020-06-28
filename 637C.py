for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    iarr = {}
    # New enpty array
    narr = [None]*n
    # Index of elements
    for i in range(n):
        iarr[arr[i]] = i
    del arr
    # Checking for each element
    for i in range(1, n+1):
        r = []
        for i in range(n):
            if narr[i] == None:
                r.append(i+1)
            else:
                r.append(-1)
        counte = 0
        count = []
        maxx = 0
        maxpos = {}
        for i in range(n):
            if r[i] == -1:
                counte += 1
                count.append(0)
            else:
                count.append(counte + 1)
                if maxx < counte + 1:
                    maxx = counte + 1
                    maxpos = {}
                    maxpos[i] = True
                if maxx == counte + 1:
                    maxpos[i] = True
                counte = 0
        index = iarr[i]
        if index in maxpos.keys():
            narr[index] = i
        else:
