p = 56100
i = 0.03
for k in range(15):
    if(k % 4 == 0):
        for j in range(3):
            z = p * i
            p += z
    z = p * i
    p += z
    print(k, " ", p)
