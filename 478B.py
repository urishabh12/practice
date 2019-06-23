n,m=map(int,input().split())
if n==m:
    print(0, 0)
else:
    max_val=n-(m-1)
    minimum=0
    if max_val>1:
        maximum=max_val*(max_val-1)//2
    else:
        maximum=0
    
    minimum+=((n//m+1)*(n//m)//2) * (n%m)
    minimum+=(((n//m)*(n//m-1))//2)*(m-(n%m))

    print(minimum,maximum)