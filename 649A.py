for _ in range(int(input())):
    n, x = map(int, input().split())
    arr = list(map(int, input().split()))
    count = 0
    suum = 0
    i, j = 0, 0
    while(i < n or j < n):
        if i == j:
            if arr[i] < x and arr[i] % x != 0:
                count += 1
            j += 1
            continue
