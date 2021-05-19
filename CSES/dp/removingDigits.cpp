#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<int> dp(1e6 + 1, 1e9);

int solve(int num)
{
    if (num <= 0)
    {
        return 0;
    }
    if (dp[num] != 1e9)
    {
        return dp[num];
    }
    int tmp = num;
    while (tmp)
    {
        int k = tmp % 10;
        tmp /= 10;
        if (k != 0)
        {
            dp[num] = min(dp[num], 1 + solve(num - k));
        }
    }

    return dp[num];
}

int iter(int num)
{
    dp[0] = 0;

    for (int i = 1; i <= 9; i++)
    {
        dp[i] = 1;
    }

    for (int i = 10; i <= num; i++)
    {
        int tmp = i;
        while (tmp)
        {
            int k = tmp % 10;
            tmp /= 10;
            if (k != 0)
            {
                dp[i] = min(dp[i], 1 + dp[i - k]);
            }
        }
    }

    return dp[num];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int ans = iter(n);

    cout << ans << '\n';

    return 0;
}
