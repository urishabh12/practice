#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll z = a % b;
        if (a % b == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (a < b)
        {
            cout << b - a << endl;
            continue;
        }
        cout << b - z << endl;
    }
}