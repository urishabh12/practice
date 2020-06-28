def position(i, j, d):
    if d == "E":
        if arr[i][j+1] == 0:
            arr[i][j+1] = 1
            return (i, j+1)
        else:
            return position(i, j+1, d)
    elif d == "W":
        if arr[i][j-1] == 0:
            arr[i][j-1] = 1
            return (i, j-1)
        else:
            return position(i, j-1, d)
    elif d == "N":
        if arr[i-1][j] == 0:
            arr[i-1][j] = 1
            return (i-1, j)
        else:
            return position(i-1, j, d)
    else:
        if arr[i+1][j] == 0:
            arr[i+1][j] = 1
            return (i+1, j)
        else:
            return position(i+1, j, d)


for t in range(int(input())):
    n, r, c, sr, sc = map(int, input().split())
    inst = input()
    arr = [[0 for i in range(c)] for j in range(r)]
    arr[sr-1][sc-1] = 1
    a = (sr-1, sc-1)
    for i in inst:
        a = position(a[0], a[1], i)
    print("Case #{}: {} {}".format(t+1, a[0]+1, a[1]+1))
