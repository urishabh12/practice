arr = list(map(int, input().split()))
for i in range(5):
    if arr[i] == 0:
        print(i+1)
        break