a = input()
b = input()
M = len(a)
N = len(b)

arr = [[-1 for i in range(N+1)] for j in range(M+1)]


def editdist(a, b, m, n):
    if m == 0:
        return n
    if n == 0:
        return m

    if arr[m-1][n-1] != -1:
        return arr[m-1][n-1]

    if a[m-1] == b[n-1]:
        arr[m-1][n-1] = editdist(a, b, m-1, n-1)
        return arr[m-1][n-1]

    arr[m-1][n-1] = 1 + min(editdist(a, b, m, n-1), editdist(a,
                                                             b, m-1, n), editdist(a, b, m-1, n-1))
    return arr[m-1][n-1]


print(editdist(a, b, M, N))
print(arr[M-1][N-1])
