#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            if (c == b)
            {
                flag = true;
            }
        }
        if (m % 2)
        {
            cout << "NO" << '\n';
            continue;
        }
        if (flag)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
