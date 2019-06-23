def sum_array(a):
    k=[]
    for i in range(len(a)):
        k.append(sum(a[:i+1]))
    return k
def bin_ser(l,s,start,end):
    if start==end:
        if s-l[start]>0:
            return start
        else:
            return -1
    if start==end-1:
        if s==l[start]:
            return start
        elif s==l[end]:
            return end
        else:
            if s-l[end]>0:
                return end
            elif s-l[start]>0:
                return start
            else:
                return -1
    if s==l[(start+end)//2]:
        return (start+end)//2
    elif s<l[(start+end)//2]:
        end=(start+end)//2
        return bin_ser(l,s,start,end)
    else:
        start=(start+end)//2
        return bin_ser(l,s,start,end)
n,t=map(int,input().split())
bt=list(map(int,input().split()))
count=0
for i in range(len(bt)):
    k=sum_array(bt[i:])
    temp=bin_ser(k,t,0,len(k)-1)
    if count<temp+1:
        count=temp+1
print(count)
