#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    unordered_map<ll, ll> m;
    map<ll, vector<ll>> nm;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
        nm[v[i]].push_back(i + 1);
    }
    bool ok = true;
    sort(v.begin(), v.end());
    for (ll k = 0; k < n; k++)
    {
        ll val = x - v[k];
        for (ll i = k + 1; i < n; i++)
        {
            if (i == k)
            {
                continue;
            }
            if (m[val - v[i]])
            {
                if (val - v[i] == v[k] && val - v[i] == v[i] && m[val - v[i]] >= 3)
                {
                    ok = false;
                    vector<ll> tmp = nm[val - v[i]];
                    for (ll j = 0; j < 3; j++)
                    {
                        cout << tmp[j] << ' ';
                    }
                    cout << '\n';
                    break;
                }
                else if (val - v[i] != v[k] && val - v[i] == v[i] && m[val - v[i]] >= 2)
                {
                    ok = false;
                    vector<ll> tmp = nm[val - v[i]];
                    for (ll j = 0; j < 2; j++)
                    {
                        cout << tmp[j] << ' ';
                    }
                    cout << nm[v[k]][0] << ' ';
                    cout << '\n';
                    break;
                }
                else if (val - v[i] == v[k] && val - v[i] != v[i] && m[val - v[i]] >= 2)
                {
                    ok = false;
                    vector<ll> tmp = nm[val - v[i]];
                    for (ll j = 0; j < 2; j++)
                    {
                        cout << tmp[j] << ' ';
                    }
                    cout << nm[v[i]][0] << ' ';
                    cout << '\n';
                    break;
                }
                else if (v[i] == v[k])
                {
                    ok = false;
                    vector<ll> tmp = nm[v[i]];
                    for (ll j = 0; j < 2; j++)
                    {
                        cout << tmp[j] << ' ';
                    }
                    cout << nm[val - v[i]][0] << ' ';
                    cout << '\n';
                    break;
                }
                else if (val - v[i] != v[k] && val - v[i] != v[i])
                {
                    ok = false;
                    cout << nm[v[k]][0] << ' ' << nm[v[i]][0] << ' ' << nm[val - v[i]][0] << '\n';
                    break;
                }
            }
        }
        if (ok == false)
        {
            break;
        }
    }

    if (ok)
    {
        cout << "IMPOSSIBLE" << '\n';
    }

    return 0;
}
