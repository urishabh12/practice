#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n <= 2)
        {
            cout << 0 << endl;
            continue;
        }
        cout << n - (n / 2 + 1) << endl;
    }
}