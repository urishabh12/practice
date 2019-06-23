for _ in range(int(input())):
    n = int(input())
    arr = [int(x) for x in input().split()]
    summ = (n*(n+1))/2
    for i in arr:
        summ -= i
    print(int(summ))