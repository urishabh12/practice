def bin_ser(l,s,start,end):
    print(start,end)
    if start==end-1:
        if s==l[start]:
            ans = l[start]
            return ans
        elif s==l[end]:
            ans = l[end]
            return ans
        else:
            return 0
    if s==l[(start+end)//2]:
        ans = l[(start+end)//2]
        return ans
    elif s<l[(start+end)//2]:
        end=(start+end)//2
        return bin_ser(l,s,start,end)
    else:
        start=(start+end)//2
        return bin_ser(l,s,start,end)

if __name__ == "__main__":
    l=[2,3,4,5,6,7,9,10,11,12,13,14,15,16,17,18,19,20,21,22]
    k=int(input())
    print(bin_ser(l,k,0,len(l)-1))  