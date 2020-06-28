for _ in range(int(input())):
    s = input()
    d = {}
    d['1'] = 0
    d['2'] = 0
    d['3'] = 0
    sumarray = []
    i = 0
    min_size = 200001
    for j in s:
        d[j] += 1
        sumarray.append((d['1'], d['2'], d['3']))
        if min(sumarray[-1]) >= 1:
            while(True):
                res = tuple(map(lambda i, j: i-j, sumarray[-1], sumarray[i]))
                if min(res) >= 1:
                    i += 1
                else:
                    min_size = min(min_size, len(sumarray)-i)
                    break
    if min_size == 200001:
        print(0)
        continue
    print(min_size)
