for _ in range(int(input())):
    input()
    arr = [int(x) for x in input().split()]
    min_index, max_index = 0,len(arr)-1
    max_element = arr[-1] + 1
    for i in range(len(arr)):
        if i%2 == 0:
            arr[i] += arr[max_index] % max_element * max_element
            max_index -= 1
        else:
            arr[i] += arr[min_index] % max_element * max_element
            min_index += 1
    for i in range(len(arr)):
        arr[i] = int(arr[i] / max_element)
    print(arr)