n, k = map(int, input().split())
arr = list(map(int, input().split()))
dp = [1000000001]*n
dp[0] = 0
for i in range(n):
    for j in range(1, k+1):
        if j > i:
            break
        dp[i] = min(dp[i], abs(arr[i]-arr[i-j]) + dp[i-j])
print(dp[-1])
