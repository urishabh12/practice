#include <bits/stdc++.h>

using namespace std;

int arr[50][50];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char c;
                cin >> c;
                arr[i][j] = c - '0';
            }
        }
        bool ans = true;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[i][j] == 1 && arr[i + 1][j] != 1 && arr[i][j + 1] != 1)
                {
                    ans = false;
                }
            }
        }
        string s = ans ? "YES" : "NO";
        cout << s << endl;
    }
}