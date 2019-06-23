m=[]
for i in range(3):
    m.append([int(x) for x in input().split()])

mx=max(sum(m[0]),sum(m[1]),sum(m[2]))+1
m[0][0],m[1][1],m[2][2]=mx-sum(m[0]),mx-sum(m[1]),mx-sum(m[2])

print(*m[0])
print(*m[1])
print(*m[2])   