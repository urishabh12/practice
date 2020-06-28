a = list(map(int, input().split()))
b = list(map(int, input().split()))
MAX_VALUE = 100000000


def mindiff(a, b, i, j):
    min_no = MAX_VALUE

    while(i < len(a) and j < len(b)):
        if a[i] < b[j]:
            min_no = min(min_no, abs(b[j]-a[i]))
            i += 1
        elif a[i] > b[j]:
            min_no = min(min_no, abs(a[i]-b[j]))
            j += 1
        elif a[i] == a[j]:
            return 0
    return min_no


a.sort()
b.sort()
print(mindiff(a, b, 0, 0))
