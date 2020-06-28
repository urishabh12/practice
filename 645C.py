for _ in range(int(input())):
    x1, y1, x2, y2 = map(int, input().split())
    i = max(x2-x1, 1)
    j = max(y2-y1, 1)
    dp = [[1 for x in range(j+1)] for y in range(i+1)]
    dp[0][0] = 0
    for x in range(1, i+1):
        for j in range(1, j+1):
            dp[i][j] = dp[i-1][j] + dp[i][j-1]
    print(dp)
