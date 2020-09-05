#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        ll k = 2 * l;
        if (k > r)
        {
            cout << -1 << " " << -1 << "\n";
        }
        else
        {
            cout << l << " " << k << "\n";
        }
    }
}
