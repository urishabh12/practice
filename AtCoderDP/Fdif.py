s = input()
t = input()
m, n = len(s), len(t)

dp = [[0 for i in range(n+1)] for j in range(m+1)]

for i in range(m+1):
    for j in range(n+1):
        if i == 0 or j == 0:
            continue
        if s[i-1] == t[j-1]:
            dp[i][j] = max(dp[i-1][j], 1 + dp[i-1][j-1])
        else:
            dp[i][j] = max(dp[i][j-1], dp[i-1][j])
print(dp[m][n])
