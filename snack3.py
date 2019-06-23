for _ in range(int(input())):
    n=int(input())
    l=[int(x) for x in input().split()]
    days=0
    n_completed=0
    for i in range(n):
        days+=1
        if days==1:
            n_completed=l[0]+1
        elif days>1:
            n_completed+=sum(l[0:n_completed])
        if n_completed>=n:
            break
    print(days)            