def fact(x):
    # base case
    if x == 1:
        return 1

    return x*fact(x-1)


# driver code
print("Enter the number")
n = int(input())
print(fact(n))
