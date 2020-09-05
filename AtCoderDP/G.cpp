#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<vector<int>> v(100001);
vector<int> dp(100001, -1);

int solve(int a)
{
    if (dp[a] != -1)
        return dp[a];
    int ans = 0;
    for (int i = 0; i < v[a].size(); i++)
    {
        ans = max(ans, solve(v[a][i]) + 1);
    }

    return dp[a] = ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, solve(i));
    }
    cout << ans << "\n";
}
