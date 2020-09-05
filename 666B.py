n = int(input())
arr = list(map(int, input().split()))
arr.sort()
l = 0
r = 100000
val = 1000000007
v = 0
while(l <= r):
    m = int((r-l)/2)
    print(str(l) + " " + str(r) + " " + str(m))
    k = m ** (n-1)
    q = abs(arr[n-1]-k)
    if (q < val):
        val = q
        v = m
    if(k > arr[n-1]):
        r = m
    elif(k < arr[n-1]):
        l = m
t = v
ans = 0
for i in range(n):
    if i == 0:
        ans += (arr[i] - 1)
    else:
        ans += (arr[i] - v)
        v *= t
print(ans)
