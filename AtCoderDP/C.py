n = int(input())
dp = [0]*3
for k in range(n):
    new_dp = [0]*3
    c = list(map(int, input().split()))
    for i in range(3):
        for j in range(3):
            if(i != j):
                new_dp[j] = max(new_dp[j], dp[i] + c[j])
    dp = new_dp
print(max(new_dp))
