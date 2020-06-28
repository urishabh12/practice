arr = list(map(int, input().split()))
n = int(input())


def coin_change(i, n):
    if n == 0:
        return 1
    if n < 0:
        return 0
    if i < 0:
        return 0

    return coin_change(i, n-arr[i]) + coin_change(i-1, n)


print(coin_change(len(arr)-1, n))
