#include <bits/stdc++.h>

using namespace std;
int mod = 1e9 + 7;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (auto &a : c)
        cin >> a;
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            dp[i][j] = dp[i - 1][j];
            int temp = j - c[i - 1];
            if (temp >= 0)
            {
                dp[i][j] += dp[i][temp];
                if (dp[i][j] >= mod)
                    dp[i][j] -= mod;
            }
        }
    }

    cout << dp[n][x] << '\n';
    return 0;
}