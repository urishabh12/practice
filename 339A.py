s=input()
ln=len(s)
if ln==1:
    print(s)
else:
    l=s.split("+")
    l.sort()
    print('+'.join(l))