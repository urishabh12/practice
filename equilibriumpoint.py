arr = [int(x) for x in input().split()]
if len(arr) == 1:
    print(1)
    exit()
for i in range(1,len(arr)):
    arr[i] += arr[i-1]
for i in range(1,len(arr)):
    temp = arr[-1] - arr[i]
    if arr[i-1] == temp:
        print(i+1)
        break