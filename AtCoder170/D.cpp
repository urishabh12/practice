#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, x = 0, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
        x = max(x, temp);
    }
    sort(arr, arr + n);
    bool dp[x + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        int j = 1;
        int val = 0;
        while (val <= n)
        {
            val = arr[i] * j;
            j++;
            if (dp[val])
            {
                flag = 1;
                break;
            }
            else
            {
                dp[val] = false;
            }
        }
        if (flag)
        {
            break;
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}