l = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]


def toBSTBalanced(arr):
    if not arr:
        return None
    mid = len(arr)//2
    print(arr[mid])
    toBSTBalanced(arr[:mid])
    toBSTBalanced(arr[mid+1:])


toBSTBalanced(l)
