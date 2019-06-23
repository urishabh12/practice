n,m=map(int,input().split())
words=[]
notes=[]
for i in range(m):
    z,x=map(str, input().split())
    words.append(z)
    words.append(x)
letter=[x for x in input().split()]
for i in range(len(letter)):
    temp=words.index(letter[i])
    if temp%2==0:
        if len(words[temp])>len(words[temp+1]):
            notes.append(words[temp+1])
        else:
            notes.append(words[temp])
    else:
        if len(words[temp])<len(words[temp-1]):
            notes.append(words[temp])
        else:
            notes.append(words[temp-1])
print(*notes)