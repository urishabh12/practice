s=input()
a=[0]*26
count=0
for i in range(len(s)):
    a[ord(s[i])-ord('a')]+=1
    if a[ord(s[i])-ord('a')]%2!=0:
        count+=1
    else:
        if count!=0:
            count-=1
if count==0 or count==1:
    print('First')
elif count%2==0:
    print('Second')
elif count%2!=0:
    print('First')