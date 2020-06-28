#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    set<array<ll, 2>> s;
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        s.insert({t, i});
    }
    for (ll i = 0; i < m; i++)
    {
        ll t;
        cin >> t;
        auto v = s.lower_bound({t + 1, 0});
        if (v == s.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            --v;
            cout << (*v)[0] << endl;
            s.erase(v);
        }
    }
}