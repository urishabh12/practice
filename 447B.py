s=input()
k=int(input())
l=[int(x) for x in input().split()]
max1=max(l)
ln=len(s)
value=0
for i in range(1,k+1):
    value+=(ln+i)*max1
for i in range(len(s)):
    value+=(i+1)*l[ord(s[i])-ord('a')]
print(value)
