s=input()
n=int(input())
if len(s)<2:
    print(s)
    exit()
l=['']*n
i,j=0,1
for k in s:
    l[i] += k
    i+=j
    if i == n-1:
        j=-1
    if not i:
        j=1
print(''.join(l))