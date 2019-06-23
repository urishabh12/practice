def gcd(m,n):
    if n>m:
        m,n=n,m
    while n:
        m , n = n , m%n
    return m         

if __name__=="__main__":
    for _ in range(int(input())):
        no=int(input())
        l=[int(x) for x in input().split()]
        for i in range(1,len(l)):
            exceed=0
            k=0
            while k<i:
                if gcd(l[k],l[i])!=1:
                    if l[i]<=50 and exceed==0:
                        l[i]+=1
                    else:
                        exceed=1
                        l[i]-=1
                        if l[i]<2:
                            l[i]+=1
                            exceed=0    
                    k=0
                else:
                    k+=1    
        print(l)