#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<vector<int>> dp(501, vector<int>(501, 1e9));

int solve(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    if (dp[a][b] != 1e9)
    {
        return dp[a][b];
    }

    for (int i = 1; i < a; i++)
    {
        dp[a][b] = min(dp[a][b], 1 + solve(a - i, b) + solve(i, b));
    }
    for (int i = 1; i < b; i++)
    {
        dp[a][b] = min(dp[a][b], 1 + solve(a, b - i) + solve(a, i));
    }

    return dp[a][b];
}

int iter(int a, int b)
{

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i == j)
            {
                dp[i][j] = 0;
            }
            else
            {
                for (int k = 1; k < i; k++)
                {
                    dp[i][j] = min(dp[i][j], 1 + dp[i - k][j] + dp[k][j]);
                }
                for (int k = 1; k < j; k++)
                {
                    dp[i][j] = min(dp[i][j], 1 + dp[i][j - k] + dp[i][k]);
                }
            }
        }
    }

    return dp[a][b];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    int ans = iter(a, b);

    cout << ans << '\n';

    return 0;
}
