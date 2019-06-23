s=input()
vowel=["A", "O", "Y", "E", "U", "I", "a", "o", "y", "e", "u", "i"]
ln=len(s)
ans=[]
for i in range(ln):
    if s[i] in vowel:
        continue
    else:
        ans.append('.')
        ans.append(s[i].lower())
print(''.join(ans))
       