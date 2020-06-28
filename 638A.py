arr = []
for i in range(1, 31):
    arr.append(2**i)
for _ in range(int(input())):
    n = int(input())
    narr = arr[:n]
    if n == 2:
        print(2)
        continue
    temp = int((n/2)-1)
    first = narr[-1] + sum(narr[:temp])
    second = sum(narr[temp:n-1])
    print(first-second)
