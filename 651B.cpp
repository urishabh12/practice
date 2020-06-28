#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        int arr[2 * n];
        bool chc[2 * n] = {false};
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        int i = 0, j = 0;
        while (c < n - 1)
        {
            if (i == j)
            {
                j++;
            }
            if (chc[i])
            {
                i++;
            }
            if (chc[j])
            {
                j++;
            }
            if (arr[i] % 2 == 0 and arr[j] % 2 == 0)
            {
                cout << i + 1 << " " << j + 1 << endl;
                chc[i] = true;
                chc[j] = true;
                i++;
                j++;
                c++;
            }
            else if (arr[i] % 2 != 0 and arr[j] % 2 != 0)
            {
                cout << i + 1 << " " << j + 1 << endl;
                chc[i] = true;
                chc[j] = true;
                i++;
                j++;
                c++;
            }
            else if (j + 1 < 2 * n - 1)
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    }
}