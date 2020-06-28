N = 4
mtx = [[0 for i in range(N)] for j in range(N)]


def check_attack(i, j):
    # checking if there is a queen in row or column
    for k in range(0, N):
        if mtx[i][k] == 1 or mtx[k][j] == 1:
            return True
    # checking diagonals
    for k in range(0, N):
        for l in range(0, N):
            if (k+l == i+j) or (k-l == i-j):
                if mtx[k][l] == 1:
                    return True
    return False


def nqueens(n):
    if n == 0:
        return True

    for i in range(N):
        for j in range(N):
            if (not(check_attack(i, j))) and mtx[i][j] != 1:
                mtx[i][j] = 1
                if nqueens(n-1) == True:
                    return True
                mtx[i][j] = 0

    return False


nqueens(N)
for i in mtx:
    print(i)
