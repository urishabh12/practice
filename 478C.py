l=list(map(int,input().split()))
s=sum(l)
print(min(s//3,s-max(l)))