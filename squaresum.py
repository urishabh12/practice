n = int(input())
arr = []
i = 1
ans = 0
while(i*i < n):
    ans = i * i
    arr.append(ans)
    i += 1
print(arr)
