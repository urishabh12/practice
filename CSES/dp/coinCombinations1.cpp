#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int mod = 1e9 + 7;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (auto &a : c)
        cin >> a;
    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - c[j] >= 0)
            {
                dp[i] += dp[i - c[j]];
                if (dp[i] >= mod)
                    dp[i] -= mod;
            }
        }
    }

    cout << dp[x] << '\n';
}
