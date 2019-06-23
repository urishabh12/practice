nlp=[31,28,31,30,31,30,31,31,30,31,30,31]
lp=[31,29,31,30,31,30,31,31,30,31,30,31]
days=['Sun','Mon','Tue','Wed','Thu','Fri','Sat']
cd=2
ans=0
for i in range(1901,2001):
    if i%4==0:
        n=lp
    else:
        n=nlp
    for j in n:
        cd+=(j%7)
        cd=cd%7
        if cd==0:
            ans+=1
print(ans)