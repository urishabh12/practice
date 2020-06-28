arr = [0, 1, 0, 3, 12]
n = len(arr)
nxt = 0
for i in range(n):
    if arr[i] != 0:
        arr[nxt] = arr[i]
        nxt += 1
for j in range(nxt, n):
    arr[j] = 0
print(arr)
