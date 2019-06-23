import time
while True:
    inp = input('Give your input or END: ')
    t=time.time()%10
    if inp=='END':
        exit()
    if t>=0 and t<3:
        print('rock')
    elif t>=3 and t<7:
        print('paper')
    else:
        print('scissor') 