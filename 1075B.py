n,m=map(int,input().split())
comm=[int(x) for x in input().split()]
dig=[int(x) for x in input().split()]
taxi=[]
diff=[]
for i in range(m+n):
    d=0
    k=0
    if dig[i]==1:
        for j in range(len(comm)):
            if dig[j]==1:
                if j==len(comm)-1:
                    taxi.append(k)
                    if len(taxi)>1:
                        taxi[-2]=taxi[-2]-k
                continue
            else:
                if taxi==[]:
                    num=abs(comm[j]-comm[i])
                    diff.append(num)
                    k+=1
                else:
                    num=abs(comm[i]-comm[j])
                    if num<diff[d]:
                        diff[d]=num
                        k+=1
                        d+=1
                    else:
                        d+=1
            if j==len(comm)-1:
                taxi.append(k)
                if len(taxi)>1:
                    taxi[-2]=taxi[-2]-k
print(*taxi)