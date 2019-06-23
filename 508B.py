s=input()
j=-1
for i in range(len(s)):
    if int(s[i])%2==0:
        j=i
        if s[j]<s[-1]:
            break
if j==-1:
    print(-1)
else:
    temp=list(s)
    temp[j]=s[-1]
    temp[-1]=s[j]
    print(''.join(temp))