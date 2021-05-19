#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<ll> v;
vector<vector<ll>> dp(5001, vector<ll>(5001, -1e18));

ll solve(ll i, ll j, ll mv)
{
    if (i == j)
    {
        if (mv == 2)
        {
            return 0;
        }
        else
        {
            return v[i];
        }
    }

    if (dp[i][j] != -1e18)
    {
        return dp[i][j];
    }

    if (mv == 1)
    {
        return dp[i][j] = max(v[i] + solve(i + 1, j, 2), v[j] + solve(i, j - 1, 2));
    }
    else
    {
        return dp[i][j] = max(solve(i + 1, j, 1), solve(i, j - 1, 1));
    }

    return dp[i][j];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    v = vector<ll>(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    int ans = solve(0, n - 1, 1);
    cout << ans << '\n';

    return 0;
}
