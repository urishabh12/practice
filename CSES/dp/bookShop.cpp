#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    vector<int> prc(n);
    vector<int> pg(n);
    for (auto &it : prc)
    {
        cin >> it;
    }
    for (auto &it : pg)
    {
        cin >> it;
    }

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (prc[i - 1] <= j)
            {
                dp[i][j] = max(pg[i - 1] + dp[i - 1][j - prc[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][x] << '\n';

    return 0;
}
