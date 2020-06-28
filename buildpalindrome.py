a = [0 for x in range(26)]


def check_palindrome(te):
    alpha = a[:]
    odd = 0
    for i in range(len(te)):
        alpha[ord(te[i])-65] += 1
        if alpha[ord(te[i])-65] % 2 == 0:
            odd -= 1
        else:
            odd += 1
    if odd > 1:
        return False
    else:
        return True


for t in range(int(input())):
    n, q = map(int, input().split())
    s = input()
    qarr = []
    ans = 0
    for _ in range(q):
        i, j = map(int, input().split())
        sr = s[i-1:j]
        if check_palindrome(sr) == True:
            ans += 1
    print("Case #{}: {}".format(t+1, ans), flush=True)
