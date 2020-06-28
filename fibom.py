n = int(input("nth fibonaci number: "))
arr = [-1]*n


def fibo(n):
    if n < 2:
        return n
    if arr[n-1] != -1:
        return arr[n-1]
    arr[n-1] = fibo(n-1) + fibo(n-2)
    return arr[n-1]


print(fibo(n))
