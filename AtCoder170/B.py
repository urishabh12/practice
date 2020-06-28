x, y = map(int, input().split())

b = (y - (2*x))/2
a = abs(x - b)
if int(a) + int(b) == x:
    print("Yes")
else:
    print("No")
