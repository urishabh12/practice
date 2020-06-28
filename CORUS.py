for _ in range(int(input())):
    n, q = map(int, input().split())
    s = input()
    arr = [0]*26
    for j in s:
        arr[ord(j)-97] += 1
    for i in range(q):
        c = int(input())
        queue = 0
        for k in range(26):
            if arr[k] > c:
                queue += arr[k]-c
        print(queue)
