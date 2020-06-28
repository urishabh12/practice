N = int(input())
A = list(map(int, input().split()))
key = max(A)+1
B = [0]*key
for a in A:
    for b in range(a, key, a):
        B[b] += 1
ans = 0
print(B)
for a in A:
    if B[a] == 1:
        ans += 1
print(ans)
