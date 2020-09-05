#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 1e9 + 5;
vector<vector<int>> v;
vector<vector<ll>> dpp;

ll dp(ll i, ll w)
{
    if (i == 0 || w == 0)
    {
        dpp[i][w] = 0;
        return dpp[i][w];
    }
    if (dpp[i][w] != -1)
        return dpp[i][w];
    if (v[i - 1][0] <= w)
    {
        dpp[i][w] = max(v[i - 1][1] + dp(i - 1, w - v[i - 1][0]), dp(i - 1, w));
        return dpp[i][w];
    }
    else
    {
        dpp[i][w] = dp(i - 1, w);
        return dpp[i][w];
    }
}

int main()
{
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        vector<int> k(2);
        for (auto &a : k)
            cin >> a;
        v.push_back(k);
    }
    for (int i = 0; i <= n; i++)
    {
        vector<ll> z(w + 1);
        for (int j = 0; j <= w; j++)
        {
            z[j] = -1;
        }
        dpp.push_back(z);
    }
    ll ans = dp(n, w);
    cout << ans << "\n";
    return 0;
}
