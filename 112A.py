alpha1=input()
alpha2=input()
ln=len(alpha1)
count=0
for i in range(ln):
    if ord(alpha1[i].lower())==ord(alpha2[i].lower()):
        count+=1
        continue
    elif ord(alpha1[i].lower())<ord(alpha2[i].lower()):
        print(-1)
        break
    else:
        print(1)
        break
if count==ln:
    print(0)        
           