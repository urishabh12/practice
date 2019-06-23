print('1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n5.Power')
no=int(input('Enter operation index: '))
if no==1:
    a,b=map(int,input('Enter 2 numbers: ').split())
    print(a+b)
elif no==2:
    a,b=map(int,input('Enter 2 numbers: ').split())
    print(a-b)
elif no==3:
    a,b=map(int,input('Enter 2 numbers: ').split())
    print(a/b)
elif no==4:
    a,b=map(int,input('Enter 2 numbers: ').split())
    print(a*b)
elif no==5:
    a,b=map(int,input('Enter 2 numbers: ').split())
    print(a**b)