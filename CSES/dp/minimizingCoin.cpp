#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (auto &a : coins)
        cin >> a;
    vector<int> dp(x + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i - coins[j] >= 0)
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
        }
    }

    if (dp[x] != 1e9)
        cout << dp[x] << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
