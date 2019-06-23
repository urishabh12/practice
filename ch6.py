import time
t=time.time()%1000
t=int(t)
for i in range(9):
    n=int(input('Enter Number: '))
    if n==t:
        print('You Win')
        exit()
    elif n<t:
        print('Too Low')
    else:
        print('Too High')
print('You Lose')