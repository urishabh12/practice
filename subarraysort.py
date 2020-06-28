arr_max = -1
arr_min = 100001
arr = [1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19]
i = 0
start = 0
end = 0


def check(val):
    global arr_max
    global arr_min
    arr_max = max(arr_max, val)
    arr_min = min(arr_min, val)


# Minimum and Maximum of unsorted values
while(True):
    if i == len(arr)-1:
        break
    if arr[i] > arr[i+1]:
        check(arr[i])
        check(arr[i+1])
        i += 1
    i += 1

# Position for minimum
for i in range(len(arr)):
    if arr[i] > arr_min:
        start = i
        break

# Position for maximum
for i in range(len(arr)-1, -1, -1):
    if arr[i] < arr_max:
        end = i
        break

print(start, end)
