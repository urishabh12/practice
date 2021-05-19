#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    ll n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> v(n);
    ll minv = (w + 2 - 1) / 2;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v[i] = make_pair(val, i);
    }
    sort(v.begin(), v.end());
    ll val = 0;
    int x = -1, y = -1;
    for (int i = 0, j = 0; i < n; i++)
    {
        while (j < n && val < minv)
        {
            val += v[j].first;
            j++;
        }
        if (val >= minv && val <= w)
        {
            x = i;
            y = j - 1;
            break;
        }
        else
        {
            val -= v[i].first;
        }
    }
    if (x != -1)
    {
        cout << y - x + 1 << '\n';
        for (int i = x; i <= y; i++)
        {
            cout << v[i].second + 1 << ' ';
        }
        cout << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
