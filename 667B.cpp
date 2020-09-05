#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y, n;
        ll ans;
        cin >> a >> b >> x >> y >> n;
        if (b > a)
            swap(a, b);
        if (b - y >= n)
        {
            b -= n;
            ans = a * b;
            cout << ans << '\n';
        }
        else
        {
            n -= (b - y);
            b = y;
            a = max(a - n, x);
            ans = (ll)a * (ll)b;
            cout << ans << '\n';
        }
    }
}
