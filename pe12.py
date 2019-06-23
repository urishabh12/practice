import math
for i in range(76570000, 99999999):
    l = [i, i//2]
    print(i)
    k = int(math.sqrt(i))
    for j in range(1, k):
        if i % j == 0:
            l.append(j)
        if len(l) > 500:
            break
    if len(l) > 500:
        break
    print(len(l))
print(i)
