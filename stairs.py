print("How many ways to reach nth step with going only 1 step or 2 step a time")
n = int(input("nth step: "))
first = 1
second = 1
for i in range(1, n):
    ans = first + second
    first = second
    second = ans
print(ans)
