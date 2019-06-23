for _ in range(int(input())):
    n,m,k,l=map(int,input().split())
    q=[int(x) for x in input().split()]
    q.sort()
    min_time=m*l
    time_elapsed=0
    i=0
    new_l=0
    while q:
        new_l+=l
        time_elapsed+=l
        
        if time_elapsed>k:
            break
        
        m-=1
        
        if q[i]<=new_l:
            m+=1
            while True:
                try:
                    if q[i+1]<=new_l:
                        m+=1
                        i+=1
                    else:
                        break
                except:
                    break
            i+=1
            new_time=m*l
            if new_time<min_time:
                min_time=new_time
        
        if i>=len(q)-1:
            break
    
    while time_elapsed<=k:
        time_elapsed+=l
        m-=1
        new_time=m*l
        if new_time<min_time:
            min_time=new_time

    print(min_time)

