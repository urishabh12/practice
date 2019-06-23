n,t = map(int,input().split());l = list(map(int,input().split()))
cnt,book,j=0,0,0
for i in range(n):
    cnt+=l[i]
    if cnt>t:
        cnt-=l[j]
        j+=1
print(len(l)-j)