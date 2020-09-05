#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int numcount(ll b, ll r, ll lc)
{
    ll d = r / lc;
    ll las = lc * d;
    ll ans = r;
    if (d > 0)
    {
        ans -= (d - 1) * b;
        ans -= min(b, r - las + 1);
    }
    ans -= min(r, b - 1);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, q;
        cin >> a >> b >> q;
        if (a > b)
            swap(a, b);
        ll lc = a * b;
        ll gc = __gcd(a, b);
        lc /= gc;
        while (q--)
        {
            ll l, r;
            cin >> l >> r;

            if (lc == b || r < b)
            {
                cout << 0 << " ";
                continue;
            }
            int c = numcount(b, r, lc);
            if (l > 1)
                c -= numcount(b, l - 1, lc);
            cout << c << " ";
        }
        cout << "\n";
    }
}
