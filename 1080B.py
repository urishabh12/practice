import math
for q in range(int(input())):
    l,r=map(int,input().split())
    l=l-1
    if l&1:
        l=-(math.ceil((l)/2))
    else:
        l=math.ceil((l)/2)
    if r&1:
        r=-(math.ceil(r/2))
    else:
        r=math.ceil(r/2)
    print(r-l)