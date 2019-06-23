s=input()
ln=len(s)
word='hello'
j=0
for i in range(ln):
    if s[i]==word[j]:
        j+=1
    if j==5:
        break
if j==5:
    print('YES')
else:
    print('NO')