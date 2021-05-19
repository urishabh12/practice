#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll a = (k * y) + k - 1;
        ll ans = a / (x - 1);
        if (ans * (x - 1) < a)
            ans++;
        ans += k;
        cout << ans << '\n';
    }
}
