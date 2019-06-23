from math import ceil, hypot
r,x,y,x1,y1=map(int,input().split())
print(ceil(hypot(x-x1,y-y1)/2/r))