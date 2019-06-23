l=[0]*1000001
def collatz(n,mx):
    no=n
    cnt=0
    while n!=1:
        try:
            if l[n]!=0:
                l[no]+=l[n]+cnt
                return l[n]+cnt
        except:
            None
        if n & 1:
            n=(3*n)+1
            cnt+=1
        else:
            n=n//2
            cnt+=1
    l[no]+=cnt
    return cnt

mx=0
num=0    
for i in range(1,1000001):
    temp=collatz(i,mx)
    if temp>mx:
        mx=temp
        num=i

print(num)