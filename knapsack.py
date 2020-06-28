def knapsack(wet, val, w, n):
    if w == 0 or n == 0:
        return 0
    if wet[n-1] <= w:
        return max(val[n-1] + knapsack(wet, val, w-wet[n-1], n-1), knapsack(wet, val, w, n-1))
    else:
        return knapsack(wet, val, w, n-1)


def knapsackdp(wet, val, w, n):
    dp = [[0 for i in range(w+1)] for j in range(n+1)]

    for i in range(n+1):
        for w in range(w+1):
            if i == 0 or w == 0:
                dp[i][w] = 0
            if wet[i-1] <= w:
                dp[i][w] = max(val[i-1] + dp[i-1][w-wet[i-1]], dp[i-1][w])
            else:
                dp[i][w] = dp[i-1][w]

    return dp


# driver code
wet = [3, 4, 5]
val = [30, 50, 60]
w = 8
n = len(wet)
print(knapsackdp(wet, val, w, n))
