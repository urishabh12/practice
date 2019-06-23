h_prev=0
time=0
for _ in range(int(input())):
    h=int(input())
    if h<h_prev:
        time+=(h_prev-h)+1
    elif h>h_prev:
        time+=(h-h_prev)+1
    else:
        time+=1

    if h_prev!=0:
        time+=1
    
    h_prev=h

print(time)