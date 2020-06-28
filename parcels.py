for t in range(int(input())):
    r, c = map(int, input().split())
    arrmap = []
    for i in range(r):
        arrmap.append(list(map(int, input())))
    cmap = [[501 for x in range(c)] for y in range(r)]
    gmaximum = 0

    def mindist(i, j):
        for x in range(r):
            for y in range(c):
                if arrmap[x][y] == 1:
                    mandist = abs((x+1)-(i+1)) + abs((y+1)-(j+1))
                    cmap[i][j] = min(cmap[i][j], mandist)

    def secondstage(i, j):
        lomax = 0
        for x in range(r):
            for y in range(c):
                if cmap[x][y] > 0 and (x, y) != (i, j):
                    mandist = abs((x+1)-(i+1)) + abs((y+1)-(j+1))
                    temp = min(cmap[x][y], mandist)
                    lomax = max(lomax, temp)
        return lomax

    # precompute the distance
    for u in range(r):
        for v in range(c):
            if arrmap[u][v] == 0:
                mindist(u, v)
                gmaximum = max(gmaximum, cmap[u][v])
            else:
                cmap[u][v] = 0

    # check for each new delivery center
    for u in range(r):
        for v in range(c):
            if arrmap[u][v] == 0:
                ansmax = secondstage(u, v)
                gmaximum = min(gmaximum, ansmax)

    print("Case #{}: {}".format(t+1, gmaximum))
