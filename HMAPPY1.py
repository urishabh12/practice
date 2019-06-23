n,q,k=map(int,input().split())
l=[int(x) for x in input().split()]
query=input()

for i in range(q):
    count,ans=0,0
    if query[i]=='!':
        l=[l[-1]]+l[:len(l)-1]
    else:
        i=0
        while True:
            if l[i]==1:
                count+=1
            else:
                if ans<count:
                    ans=count
                count=0
                
            if i>=len(l)-1:
                break
                
            i+=1
        if ans>=k:
            print(k)
        else:
            print(ans)

