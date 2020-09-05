#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ans = 0;
        cin >> n >> m;
        vector<string> v(n);
        for (auto &a : v)
            cin >> a;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i].back() == 'R')
                ans++;
        }

        for (int i = 0; i < m - 1; i++)
        {
            if (v[n - 1][i] == 'D')
                ans++;
        }

        cout << ans << "\n";
    }
}
