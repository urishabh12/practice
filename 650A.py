for _ in range(int(input())):
    b = input()
    a = b[0]
    for i in range(1, len(b)-1):
        if i % 2 != 0:
            a += b[i]
    a += b[-1]
    print(a)
