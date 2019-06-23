n=int(input())
home=[]
away=[]
count=0
for i in range(n):
    m,n=map(int, input().split())
    home.append(m)
    away.append(n)
for i in range(len(home)):
    for j in range(len(away)):
        if home[i]==away[j]:
            count+=1
print(count)