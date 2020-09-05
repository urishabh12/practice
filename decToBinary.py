x = 23
for i in range(10, -1, -1):
    if (x & (1 << i)) != 0:
        print(1, end="")
    else:
        print(0, end="")
