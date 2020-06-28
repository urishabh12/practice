for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    granies = 1
    waiting = 0
    i = 0
    while(i < n):
        if arr[i] <= granies:
            granies += 1
            i += 1
        else:
            if arr[i] <= waiting + granies:
                granies += waiting + 1
                waiting = 0
            else:
                waiting += 1
            i += 1
    print(granies)
