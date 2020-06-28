def calc(num):
    ans = 0
    while(num):
        temp = num % 10
        ans += (temp*temp)
        num = int(num/10)
    return ans


lis = []

for j in range(300):
    dic = {}
    for i in range(30):
        ans = calc(j)
        if ans == 1:
            lis.append(i)
            break
        if ans in dic.keys():
            lis.append(i)
            break
        else:
            dic[ans] = 1
            j = ans
print(max(lis))
