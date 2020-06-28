for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    n_min = 11
    n_max = 1
    count = 1
    for i in range(1, n):
        if arr[i] - arr[i-1] <= 2:
            count += 1
        else:
            n_min = min(n_min, count)
            n_max = max(n_max, count)
            count = 1
    n_min = min(n_min, count)
    n_max = max(n_max, count)
    print(n_min, n_max)
