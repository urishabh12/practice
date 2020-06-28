x, n = map(int, input().split())
dic = {}
arr = list(map(int, input().split()))
for i in range(n):
    dic[arr[i]] = True
for i in range(1, 100):
    if x not in dic:
        print(x)
        break
    if x-i in dic:
        if x+i in dic:
            continue
        else:
            print(x+i)
            break
    else:
        print(x-i)
        break
