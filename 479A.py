a,b,c=int(input()),int(input()),int(input())
ans=a+b+c
ans=max(ans,a*b*c)
ans=max(ans,(a+b)*c)
ans=max(ans,a*(b+c))
print(ans)