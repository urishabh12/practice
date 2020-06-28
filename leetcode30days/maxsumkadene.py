n = list(map(int, input().split()))
ans = -100000
a = 0
for i in n:
    a += i
    ans = max(ans, a)
    a = max(0, a)
print(ans)
