#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int ans = 0;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            int j = 0;
            while (j < m)
            {
                if (s[j] == '.')
                {
                    if (j + 1 < m && s[j + 1] == '.')
                    {
                        ans += min(2 * x, y);
                        j += 2;
                    }
                    else
                    {
                        ans += x;
                        j++;
                    }
                }
                else
                {
                    j++;
                }
            }
        }
        cout << ans << endl;
    }
}