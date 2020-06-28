def diffsum(arr):
    ans = 0
    summ = 0
    for i in range(len(arr)):
        ans += (arr[i] * i - summ)
        summ += arr[i]
    print(ans)
    return ans


x = [-1, 1, 3, 2]
y = [5, 6, 5, 3]
x.sort()
y.sort()
fans = diffsum(x) + diffsum(y)
print(fans)
