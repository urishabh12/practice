#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, x = 0, y = 0;
        cin >> n >> k;
        map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            if (k - z % k == 0)
                continue;
            m[k - z % k]++;
        }
        for (ll i = 1; i < k; i++)
        {
            if (m[i] >= y)
            {
                x = i;
                y = m[i];
            }
        }
        cout << (k * (y - 1)) + x + 1 << endl;
    }
}