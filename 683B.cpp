#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int n, m;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool isValid(int x, int y)
{
    return x >= 0 && y >= 0 && x < n && y < m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        int neg = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
                if (v[i][j] < 0)
                {
                    neg++;
                    sum += (-1 * v[i][j]);
                }
                else
                {
                    sum += v[i][j];
                }
            }
        }
        if (neg % 2 == 0)
        {
            cout << sum << '\n';
            continue;
        }
        else
        {
            int val = 1e9;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (v[i][j] >= 0)
                    {
                        val = min(val, v[i][j]);
                    }
                    else
                    {
                        val = min(val, -1 * v[i][j]);
                    }
                }
            }
            cout << sum - (2 * val) << '\n';
        }
    }

    return 0;
}
