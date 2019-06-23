import time
print('Rock Paper & Scissors')
valid=['Rock','Paper','Scissors']
while True:
    n=input('Your input or END to stop: ')
    t=time.time()%10
    if n=='END':
        break
    if n not in valid:
        print('Invalid Input')
        continue
    if t>=0 and t<=3:
        print('Rock')
        if n=='Paper':
            print('You Win')
        elif n=='Rock':
            print('Draw')
        else:
            print('You Lose')
        continue
    elif t>=4 and t<=6:
        print('Paper')
        if n=='Scissors':
            print('You Win')
        elif n=='Paper':
            print('Draw')
        else:
            print('You Lose')
        continue
    else:
        print('Scissors')
        if n=='Rock':
            print('You Win')
        elif n=='Scissors':
            print('Draw')
        else:
            print('You Lose')
        continue