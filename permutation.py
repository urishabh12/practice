def isRepeatPermute(n, r):
    ans = n**r
    return ans


def isNotRepeatPermute(n, r):
    a = n-r
    a = max(a, 1)
    ans = 1
    for i in range(n, a, -1):
        ans *= i
    return ans


print(isNotRepeatPermute(6, 4))
