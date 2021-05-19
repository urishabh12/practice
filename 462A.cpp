#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    vector<ll> vv(m);

    for (auto &it : v)
    {
        cin >> it;
    }
    for (auto &it : vv)
    {
        cin >> it;
    }
    ll ans = 1e18 + 1;
    for (int k = 0; k < n; k++)
    {
        ll res = -1e18;
        for (int i = 0; i < n; i++)
        {
            if (i != k)
            {
                for (int j = 0; j < m; j++)
                {
                    res = max(res, v[i] * vv[j]);
                }
            }
        }
        ans = min(ans, res);
    }

    cout << ans << '\n';

    return 0;
}
