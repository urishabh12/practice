n=int(input())
home=[]
away=[]
for i in range(n):
    j,k=map(int,input().split())
    home.append(j)
    away.append(k)
for i in range(len(home)):
    h_count=n-1
    a_count=(len(home)-1)-(home.count(away[i]))
    h_count+=(len(away)-1)-a_count
    print(h_count,a_count)