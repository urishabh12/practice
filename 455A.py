input()
a=b=0
cnt=[0]*100001
for i in input().split():
    i=int(i)
    cnt[i]+=i
    
for i in cnt:
    a,b=max(a,i+b),a

print(a)