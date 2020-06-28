import math
for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    if a <= b:
        print(b)
        continue
    k = c-d
    x = a-b
    if k <= 0:
        print(-1)
        continue
    temp = math.ceil(x/k)
    addmin = c * temp
    print(b + addmin)
