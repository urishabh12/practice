#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 2);
            }
            else
            {
                dp[i][j] = max({dp[i][j], dp[i][j - 1] - 1, dp[i - 1][j] - 1});
            }
        }
    }
    int ans = -1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            ans = max(ans, dp[i][j]);
        }
    }

    cout << ans << '\n';

    return 0;
}
