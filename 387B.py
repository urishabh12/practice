n, m = map(int, input().split())
nc = list(map(int, input().split()))
mc = list(map(int, input().split()))
i1 = 0
i2 = 0
while i1 < n and i2 < m:
    if nc[i1] <= mc[i2]:
        i1 += 1
    i2 += 1
print(n-i1)
