m=[]
for i in range(3):
    m+=list(map(int,input().split()))
m[0]=(2*m[7]+m[6]-m[2])//2
m[4]=m[7]+m[6]-m[0]
m[8]=m[1]+m[2]-m[4]
print(*m[:3])
print(*m[3:6])
print(*m[6:9])