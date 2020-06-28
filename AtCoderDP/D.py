n, w = map(int, input().split())
arr = []
for i in range(n):
    arr.append(list(map(int, input().split())))

dp = [[0 for i in range(w+1)] for j in range(n+1)]

for i in range(n+1):
    for w in range(w+1):
        if i == 0 or w == 0:
            dp[i][w] = 0
        if arr[i-1][0] <= w:
            dp[i][w] = max(arr[i-1][1] + dp[i-1][w-arr[i-1][0]], dp[i-1][w])
        else:
            dp[i][w] = dp[i-1][w]

print(dp[-1][-1])
