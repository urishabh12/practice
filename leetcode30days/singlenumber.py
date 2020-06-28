arr = list(map(int, input().split()))
xor = arr[0]
for i in range(1, len(arr)):
    xor = xor ^ arr[i]
print(xor)
