#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int N;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    vector<int> v(N);
    int max_sum = 1000 * N;
    for (auto &it : v)
    {
        cin >> it;
    }
    vector<vector<bool>> dp(N + 1, vector<bool>(max_sum + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= max_sum; j++)
        {
            dp[i][j] = dp[i - 1][j];
            int left = j - v[i - 1];
            if (left >= 0 && dp[i - 1][left])
            {
                dp[i][j] = true;
            }
        }
    }

    vector<int> ans;
    for (int i = 1; i <= max_sum; i++)
    {
        if (dp[N][i])
        {
            ans.push_back(i);
        }
    }
    cout << ans.size() << '\n';
    for (int i : ans)
    {
        cout << i << ' ';
    }
    cout << '\n';

    return 0;
}
