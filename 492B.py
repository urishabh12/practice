n,l=map(int,input().split())
x=[int(x) for x in input().split()]
x.sort()
radius=0
if x[0]!=0:
    radius=x[0]-0
if x[-1]!=l:
    if radius==0:
        radius=l-x[-1]
    else:
        temp=l-x[-1]
        if radius<temp:
            radius=temp

for i in range(len(x)-1):
    temp = (x[i+1]-x[i]) /2
    if temp>radius:
        radius=temp
print("%.10f" %float(radius))