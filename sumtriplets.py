for _ in range(int(input())):
    input()
    arr = [int(x) for x in input().split()]
    arr.sort()
    count = 0
    for i in range(2,len(arr)):
        for j in range(i-1, 0, -1):
            if arr[j]+arr[j-1] == arr[i]:
                count += 1
                break
            if arr[j]+arr[j-1] < arr[i]:
                break
    if count > 0: print(count)
    else: print(-1)