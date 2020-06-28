arr = list(map(int, input().split()))
n = int(input())
triplet = []
arr.sort()
for i in range(len(arr)-2):
    se = arr[i]
    li = i+1
    ri = len(arr)-1
    l, r = arr[li], arr[ri]
    while(True):
        summ = se + l + r
        if li == ri:
            break
        if summ == n:
            triplet.append((se, l, r))
            li += 1
            ri += 1
            l, r = arr[li], arr[ri]
        elif summ < n:
            li += 1
            l = arr[li]
        else:
            ri -= 1
            r = arr[ri]
print(triplet)
