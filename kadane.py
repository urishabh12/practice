from sys import maxsize
for _ in range(int(input())):
    input()
    arr = [int(x) for x in input().split()]
    max_so_far = -maxsize - 1
    max_ending_here = 0
    for i in arr:
        max_ending_here += i
        if max_ending_here > max_so_far:
            max_so_far = max_ending_here
        if max_ending_here < 0:
            max_ending_here = 0
    print(max_so_far)