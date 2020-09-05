t = int(input())
for _ in range(t):
    a, b, x, y, n = map(int, input().split())
    aa = a
    bb = b
    nn = n
    if(a-x >= n):
        a -= n
        ans = a * b
    else:
        n -= (a-x)
        a = x
        b = max(b - n, y)
        ans = a * b
    if(bb-y >= nn):
        bb -= nn
        ans = min(ans, aa * bb)
    else:
        nn -= (bb - y)
        bb = y
        aa = max(aa - nn, x)
        ans = min(ans, aa * bb)
    print(ans)
