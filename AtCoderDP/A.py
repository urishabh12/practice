n = int(input())
arr = list(map(int, input().split()))
dp = [0]*n
dp[0] = 0
dp[1] = abs(arr[1] - arr[0])
for i in range(2, n):
    dp[i] = min(abs(arr[i]-arr[i-1])+dp[i-1], abs(arr[i]-arr[i-2])+dp[i-2])
print(dp[-1])
