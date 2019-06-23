n=int(input())
l=[int(x) for x in input().split()]
flag=0
count1,count2=0,0
start=l[0]
for i in range(len(l)):
    if flag==0:
        if i==len(l)-1:
            count1+=1
            continue
        if l[i+1]>=l[i]:
            count1+=1
        else:
            flag=1
            count1+=1
    else:
        if i==len(l)-1:
            if l[i]<=start:
                count2+=1
                continue
            else:
                continue
        if l[i+1]>=l[i] and l[i]<start:
            count2+=1
        else:
            break
if count1+count2==len(l):
    print(count2)
else:
    print(-1)