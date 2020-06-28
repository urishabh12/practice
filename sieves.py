n = int(input())
arr = [i for i in range(0, n+1)]
i = 2
while(i < n):
    j = 2
    while(i*j < n+1):
        arr[i*j] = 0
        j += 1
    i += 1
print(len(set(arr[2:]))-1)
