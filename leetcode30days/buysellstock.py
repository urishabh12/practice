arr = [7, 1, 5, 3, 6, 4]
n = len(arr)
profit = 0
for i in range(1, n):
    if arr[i] > arr[i-1]:
        profit += arr[i] - arr[i-1]

print(profit)
