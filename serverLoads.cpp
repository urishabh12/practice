#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> v(1000);
int ans = INT_MAX;
int tot = 0;

void solve(int i, int a, int b, vector<vector<int>> &dp)
{
    if (i < 0)
    {
        ans = min(ans, abs(a - b));
        return;
    }
    if (dp[a + v[i]][b] == -1)
    {
        dp[a + v[i]][b] == 1;
        solve(i - 1, a + v[i], b, dp);
    }
    if (dp[a][b + v[i]] == -1)
    {
        dp[a][b + v[i]] == 1;
        solve(i - 1, a, b + v[i], dp);
    }
}

int main()
{
    for (auto &a : v)
        cin >> a;
    for (int i : v)
        tot += i;
    cout << "start"
         << "\n";
    vector<vector<int>> dp(tot + 1, vector<int>(tot + 1, -1));
    solve(v.size() - 1, 0, 0, dp);
    cout << ans << endl;
}
