#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll ans = 1e18;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    for (ll msk = 0; msk < (1 << n); msk++)
    {
        ll l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (msk & (1 << i))
            {
                l += v[i];
            }
            else
            {
                r += v[i];
            }
        }
        ans = min(ans, abs(l - r));
    }

    cout << ans << '\n';

    return 0;
}