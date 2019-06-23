arr = [int(x) for x in input().split()]
temp = [0] * 3
temp2 = []
for i in arr:
    temp[i] += 1
for i in range(3):
    temp2.extend([i]*temp[i])
print(temp2)