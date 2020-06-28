#include <iostream>

using namespace std;
using ll = long long;
const int INF = 1e9 + 5;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][2];
    int dp[n + 1][m + 1] = {1000001};
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 0; i < n + 1; ++i)
    {
        for (int j = 0; j < m + 1; ++j)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            if (arr[i - 1][0] <= j)
            {
                dp[i][j] = max(arr[i - 1][1] + dp[i - 1][j - arr[i - 1][0]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}
