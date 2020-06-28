for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    parr = [0]*n
    ind = 0
    maxx = 0
    for i in range(1, n-1):
        if arr[i] > arr[i-1] and arr[i] > arr[i+1]:
            parr[i] = parr[i-1] + 1
        else:
            parr[i] = parr[i-1]
    for i in range(0, n-k+1):
        peak = parr[i+k-2]-parr[i]
        if peak > maxx:
            ind = i
            maxx = peak
    print("{} {}".format(maxx+1, ind+1))
