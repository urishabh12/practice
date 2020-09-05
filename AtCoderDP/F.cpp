#include <bits/stdc++.h>

using namespace std;
using ll = long long;
string s, t;

int lcs(int i, int j)
{
    if (i == 0 || j == 0)
        return 0;
    if (s[i - 1] == t[j - 1])
        return 1 + lcs(i - 1, j - 1);
    else
        return max(lcs(i - 1, j), lcs(i, j - 1));
}

int main()
{
    cin >> s >> t;
    int m = s.size(), n = t.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    string ans;
    for (int i = m; i >= 0; i--)
    {
        int a = dp[i][n];
        for (int j = n; j >= 0; j--)
        {
            if (dp[i][j] < a && s[i] == t[j])
            {
                ans += s[i];
                break;
            }
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
}
