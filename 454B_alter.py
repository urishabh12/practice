n=int(input())
l=[int(x) for x in input().split()]

for i in range(len(l)-1):
    
    if l[i]>l[i+1]:
        
        if sorted(l)==l[i+1:]+l[:i+1]:
            print(n-i-1)
            exit()
        else:
            print(-1)
            exit()
print(0)
