for _ in range(int(input())):
    n = int(input())
    l = [x for x in input()]
    m = []
    if l[0] == 'E':
        i1, j1 = 1, 0
        i2, j2 = 0, 1
        m.append('S')
        flag = 0
    else:
        i1, j1 = 0, 1
        i2, j2 = 1, 0
        m.append('E')
        flag = 1
    i = 1
    count = 0
    while len(m) < len(l):
        if l[i] == 'E':
            i1 += 1
        else:
            j1 += 1
        if i2 >= n-1 or j2 >= n-1:
            if flag == 0:
                flag = 1
            else:
                flag = 0
        if flag == 0:
            j2 += 1
            m.append('S')
            i += 1
        else:
            i2 += 1
            m.append('E')
            i += 1
        if i1 == i2 and j1 == j2:
            count += 1
        if count == 2:
            i = i - 2
            if flag == 0:
                flag = 1
            else:
                flag = 0
            m.pop()
            m.pop()
        print(m[-1])
    print("".join(m))
