s=input()
i,j=0,1
l=[]
while True:
    try:
        if s[i]=='W' and s[i+1]=='U' and s[i+2]=='B':
            i+=3
            if j==0:
                print(' ',end='')
        else:
            print(s[i],end='')
            j=0
            i+=1
    except:
        print(s[i],end='')
        i+=1
    
    if i>len(s)-1:
        break