for _ in range(int(input())):
    n, k = map(int, input().split())
    num = input()
    i = 0
    last_pos = 0
    count = 0
    if num[i] == "1":
        i += 1
    else:
        if i+k > n:
            i = n
        if int(num[i:i+k+1]) == 0:
            count += 1
            i += k + 1
    while(i < n):
        print(i)
        if num[i] == "1":
            last_pos = i
            i += 1
        else:
            if (i+k+k > n):
                break
            if int(num[i:i+k]) == 0 and int(num[i+k+1:i+k+k+1]) == 0 and num[i+k] == "0":
                count += 1
                i += k + k + 1
            else:
                i += k + k + 1
    print(count)
