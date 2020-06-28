#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, even = 0, odd = 0, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even % 2 != odd % 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (even % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                sort(arr, arr + n);
                int flag = 0;
                for (int i = 0; i < n - 1; i++)
                {
                    if (abs(arr[i] - arr[i + 1]) == 1)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }
}