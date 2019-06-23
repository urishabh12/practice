def sum_digits(n):
    sum=0
    while n:
        sum+=n%10
        n//=10
    
    return sum
if __name__ == "__main__":
    d,s=map(int,input().split())
    i=0
    temp=0
    while True:
        temp=d*i
        if sum_digits(temp)==s:
            break
        i+=1
    print(temp)        
