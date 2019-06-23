n=int(input())
l=[int(x) for x in input().split()]
start,end=-1,-1
flag=0
i,j,k=0,0,0
for i in range(len(l)-1):
    if l[i+1]<l[i]:
        start=l[i]
        break
for j in range(i+1,len(l)):
    if l[j]>start:
        end=l[j-1]
        break
    elif j==len(l)-1:
        end=l[j]
        flag=1
        break
if i==len(l)-2 and start==-1 or len(l)==1:
    print('yes')
    print(1,1)
elif start!=-1 and end!=-1:
    if flag==1:
        l=l[:i]+l[i:j+1][::-1]
    else:
        l=l[:i] + l[i:j][::-1] + l[j:]
    for k in range(len(l)-1):
        if l[k+1]<l[k]:
            print('no')
            break
    if k==len(l)-2 and l[k+1]>l[k]:
        if flag==1:
            print('yes')
            print(i+1,j+1)
        else:
            print('yes')
            print(i+1,j)
else:
    print('no')    