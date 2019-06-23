for _ in range(int(input())):
    a,b,k=map(int,input().split())
    ans=(a*((k//2)+(k%2))-(b*(k//2)))
    print(ans)