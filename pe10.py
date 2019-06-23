l=[x for x in range(2,2000000)]
n=len(l)
for x in range(0,n):
    for j in range(x+1,n):
        if l[j]%l[x]==0:
            del l[j]
            n=len(l)
print(sum(l))            
