s = 1
for i in range(2, 101):
    s *= i
l = list(str(s))
ans = 0
for i in l:
    ans += int(i)
print(ans)
