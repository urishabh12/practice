#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, m, x, y;
        cin >> a >> b >> n >> m;
        x = max(a, b);
        y = min(a, b);
        if (y < m)
        {
            cout << "NO" << endl;
        }
        else if ((y - m) + x < n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}