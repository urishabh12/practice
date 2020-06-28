n = int(input())
arr = list(map(int, input().split()))
vstack = []
pstack = []
vstack.append(arr[0])
pstack.append(0)
area = 0


def popIt(i, area):
    v = vstack.pop()
    pi = pstack.pop()
    temp = v * (i - pi)
    area = max(area, temp)
    return (pi, area)


for i in range(1, len(arr)):
    if arr[i] > vstack[-1]:
        vstack.append(arr[i])
        pstack.append(i)
    elif arr[i] < vstack[-1]:
        while(len(vstack) and arr[i] < vstack[-1]):
            temp = popIt(i, area)
            pi = temp[0]
            area = temp[1]
        pstack.append(pi)
        vstack.append(arr[i])

while(len(vstack)):
    popIt(len(arr), area)
print(area)
