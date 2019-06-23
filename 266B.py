n,t=map(int, input().split())
s=input()
l=list(s)
for j in range(t):
    i=0
    while True:
        if i>=len(l):
            break
        try:
            if l[i]=='B' and l[i+1]=='G':
                l[i],l[i+1]=l[i+1],l[i]
                i+=2
            else:
                i+=1
        except:
            i+=1
s=''.join(l)
print(s)