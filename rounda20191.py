
n, p = map(int, input().split())
arr = [int(x) for x in input().split()]
arr.sort(reverse=True)
hr = hrs = sum(arr[0] - s for s in arr[1:p])
for i in range(n-p+1):
    hrs = (arr[i]*(p-1)) - sum(arr[i+1:p+i])
    if hrs < hr:
        hr = hrs
print(hr)
