#include <bits/stdc++.h>

using namespace std;
using ll = long long;
string s1;
string s2;

vector<vector<int>> dp(5001, vector<int>(5001, -1));

int solve(int i, int j)
{
    if (i == 0 || j == 0)
    {
        return abs(i - j);
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    if (s1[i - 1] == s2[j - 1])
    {
        return dp[i][j] = solve(i - 1, j - 1);
    }
    else
    {
        return dp[i][j] = min({1 + solve(i, j - 1), 1 + solve(i - 1, j), 1 + solve(i - 1, j - 1)});
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> s1 >> s2;
    N = s1.size();
    M = s2.size();
    int ans = solve(N, M);

    cout << ans << '\n';

    return 0;
}
