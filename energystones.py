n = int(input())
arr = []
for i in range(n):
    arr.append(tuple(map(int, input().split())))
arr.sort(reverse=True)


def max_energy(time, i):
    if i == 0:
        return max(0, arr[i][1]-arr[i][2]*time)
    return max(max(0, arr[i][1]-arr[i][2]*time)+max_energy(time+arr[i][0], i-1), max_energy(time, i-1))


print(max_energy(0, n-1))
