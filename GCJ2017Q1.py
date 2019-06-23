def flip(s):
    for i in range(len(s)):
        if s[i] == "+":
            s[i] = "-"
        else:
            s[i] = "+"
    return s


for _ in range(int(input())):
    s, k = map(str, input().split())
    k = int(k)
    s = list(s)
    steps = 0
    inl = 0
    i = 0
    while len(s) >= k:
        while len(s) > 0:
            if s[i] == '+':
                del s[i]
            else:
                break
        if len(s) < k:
            break
        s[:k] = flip(s[:k])
        if len(s) == k:
            inl += 1
        if inl == 2:
            break
        steps += 1
    if len(s) == 0:
        print(steps)
    else:
        print('IMPOSSIBLE')
