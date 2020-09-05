#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        int i = 0, j = 0;
        for (int k = 0; k < n + m - 1; k++)
        {
            while (i < n && j >= 0)
            {
                cout << v[i][j] << " ";
                i++;
                j--;
            }
            if (j < m - 1)
            {
                i = 0;
                j = k + 1;
            }
            else
            {
                j = m - 1;
                i = k - n + 1;
            }
            cout << endl;
        }
    }
}