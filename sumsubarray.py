for _ in range(int(input())):
    n,sm = map(int, input().split())
    arr = [int(x) for x in input().split()]
    f = 0
    for i in range(len(arr)):
        temp = 0
        for j in range(i, len(arr)):
            temp += arr[j]
            if temp == sm:
                print(i+1, j+1)
                f = 1
                break
            if temp > sm:
                break
        if f == 1:
            break
    if f == 0:
        print(-1)