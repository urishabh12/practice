n=int(input())
first,second=[],[]
r,fs,ss=0,0,0
flag=0
for i in range(n):
    k=int(input())
    last=k
    if k>0:
        first.append(k)
        fs+=k
    else:
        second.append(abs(k))
        ss+=abs(k)

if fs>ss:
    print('first')
    exit()
elif ss>fs:
    print('second')
    exit()

if len(first)>len(second):
    k=len(second)
    flag=1
elif len(second)>len(first):
    k=len(first)
    flag=2
else:
    k=len(first)

for i in range(k):
    if first[i]==second[i]:
        r+=1
    else:
        break
if r==k and flag==0:
    if last>0:
        print('first')
    else:
        print('second')
elif r==k and flag==1:
    print('first')
elif r==k and flag==2:
    print('second')
elif r<k:
    if first[r]>second[r]:
        print('first')
    else:
        print('second')