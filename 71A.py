for _ in range(int(input())):
    al=input()
    ln=len(al)
    if ln>10:
        k=ln-2
        print(al[0]+str(k)+al[-1])
    else:
        print(al)