#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = abs(a - b);
        int k = x % 10;
        x -= k;
        int ans = x / 10;
        ans += min(1, k);
        if (a == b)
            cout << 0 << '\n';
        else
            cout << ans << '\n';
    }
}
