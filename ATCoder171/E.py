n = int(input())
s = input()
ln = len(s) + 1
ans = 0
for i in range(n):
    ans += 26**ln
    ln += 1
print(ans % 1000000007)
