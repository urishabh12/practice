l = [(1, 9), (2, 8), (3, 7), (4, 6), (5, 5)]


def comp(a, b):
    if(a[1] > b[1]):
        return -1
    else:
        return 1


l = sorted(l, key=lambda var: var[1])
print(l)
