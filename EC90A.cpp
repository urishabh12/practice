#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a >= c)
        {
            cout << -1 << " " << b << endl;
        }
        else
        {
            ll t = a * b;
            if (t > c)
            {
                cout << 1 << " " << b << endl;
            }
            else
            {
                cout << 1 << " " << -1 << endl;
            }
        }
    }
}