#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 1e9 + 5;
vector<vector<ll>> v;

int main()
{
    ll n, w;
    cin >> n >> w;
    for (ll i = 0; i < n; i++)
    {
        vector<ll> k(2);
        for (auto &a : k)
            cin >> a;
        v.push_back(k);
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(w + 1));
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (v[i - 1][0] <= j)
                dp[i][j] = max(v[i - 1][1] + dp[i - 1][j - v[i - 1][0]], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][w] << "\n";

    return 0;
}
