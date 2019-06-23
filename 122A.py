lucky_number=[4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]
n=int(input())
yes=0
for i in range(len(lucky_number)):
    if n%lucky_number[i]==0:
        yes=1
        break
if yes==1:
    print('YES')
else:
    print('NO')