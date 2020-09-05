#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        bool ok = true;
        for (auto &a : v)
            cin >> a;
        ll a = v[0] + v[1];
        for (int i = 2; i < n; i++)
        {
            if (v[i] >= a)
            {
                cout << 1 << " " << 2 << " " << i + 1 << "\n";
                ok = false;
                break;
            }
        }

        if (ok)
            cout << -1 << "\n";
    }
}
