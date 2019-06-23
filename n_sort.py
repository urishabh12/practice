#list of all values
d=[0]*(10**5)
#sorted list and (min,max)
l,mx,mn=[],0,0
#Accepting Input
for i in input().split():
    i=int(i)
    mx=max(mx,i)
    mn=min(mn,i)
    d[i]+=1
#creating sorted array
for i in range(mn,mx+1): 
    for j in range(d[i]): l.append(i)
print(l)