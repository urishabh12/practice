def che(s,t):
    j=0
    for i in s:
        if t[j]==i:
            j+=1
        if j==len(t):
            return True
s=input()
t=input()
sa=sorted(s)
st=sorted(t)
if sa==st:
    print('array')
elif che(s,t):
    print('automaton')
elif che(sa,st):
    print('both')
else:
    print('need tree')