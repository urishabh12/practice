x,y=map(int,input().split())
n=int(input())
n=n%6
if n==0:
    print((x-y) % ((10**9)+7))
elif n==5:
    print((-y) % ((10**9)+7))
elif n==4:
    print((-x) % ((10**9)+7))
elif n==3:
    print((y-x) % ((10**9)+7))
elif n==2:
    print(y % ((10**9)+7))
else:
    print(x % ((10**9)+7))