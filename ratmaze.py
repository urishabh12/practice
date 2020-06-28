maze = [[1, 0, 0, 0], [1, 1, 1, 1], [0, 1, 0, 0], [1, 1, 1, 1]]
n = 4


def ratmaze(i, j):
    if i == n-1 and j == n-1:
        return True
    if j == n-1:
        return False
    # Right move
    if maze[i][j+1] == 1:
        if ratmaze(i, j+1) == True:
            return True
    # Down move
    if maze[i+1][j] == 1:
        if ratmaze(i+1, j) == True:
            return True
    return False


print(ratmaze(0, 0))
