n,m=map(int,input().split())
l=[int(x) for x in input().split()]
curr_pos=1
time=0
for i in l:
    if i<curr_pos:
        time=time+((n-curr_pos)+i)
        curr_pos=i
    elif i==curr_pos:
        continue
    else:
        time+=(i-curr_pos)
        curr_pos=i
print(time)