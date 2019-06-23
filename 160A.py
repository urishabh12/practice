n=int(input())
coin=[int(x) for x in input().split()]
coin=sorted(coin,reverse=True)
half=(sum(coin)//2)+1
coins=0
ans=0
for i in range(len(coin)):
    ans+=1
    coins+=coin[i]
    if coins>=half:
        break
print(ans)        