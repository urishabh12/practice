s=input()
numRows=int(input())
if numRows < 2:
    print(s)
    exit()
conversion = ['']*numRows
i, j = 0, 1
for char in s:
    conversion[i] += char
    i += j
    if i == numRows - 1:
        j = -1
    if not i:
        j = 1
print(''.join(conversion))