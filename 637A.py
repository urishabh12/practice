for _ in range(int(input())):
    n, a, b, c, d = map(int, input().split())
    l = n * (a - b)
    r = n * (a + b)
    if r < (c-d) or l > (c+d):
        print("No")
    else:
        print("Yes")
