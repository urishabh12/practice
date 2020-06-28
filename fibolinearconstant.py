n = int(input("nth fibonaci number: "))
first = 0
second = 1
for i in range(1, n):
    ans = first + second
    first = second
    second = ans
print(ans)
