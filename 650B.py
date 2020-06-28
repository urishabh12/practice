for t in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    i = 0
    even, odd = 0, 0
    while(i < n):
        val = arr[i] % 2
        if val == i % 2:
            i += 1
        else:
            if(val):
                odd += 1
            else:
                even += 1
            i += 1
    if(even == odd):
        print(even)
    else:
        print(-1)
