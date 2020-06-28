for t in range(int(input())):
    n, k = map(int, input().split())
    arr = list(set(map(int, input().split())))
    if len(arr) > k:
        print(-1)
        continue
    print(n*k)
    one = [1] * (k-len(arr))
    for i in range(n-1):
        print(*arr, *one, end=" ")
    print(*arr, *one)
