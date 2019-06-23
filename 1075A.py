n=int(input())
x,y=map(int,input().split())
xw=abs(x-1)
yw=abs(y-1)
xb=abs(x-n)
yb=abs(y-n)
if xw+yw<=xb+yb:
    print('White')
else:
    print('Black')
