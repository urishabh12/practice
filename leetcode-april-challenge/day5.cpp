#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 6;
    int arr[] = {7, 1, 5, 3, 6, 4};
    int dp[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else
            {
                dp[i][j] = max((arr[i - 1] - arr[j - 1]) + dp[i - 1][j - 1], dp[i - 1][j]);
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}