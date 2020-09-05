#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    for (auto &a : v)
        cin >> a;
    ll max_till_now = 1;
    ll ans = 0;
    for (ll a : v)
    {
        if (a < max_till_now)
            ans += (max_till_now - a);
        max_till_now = max(max_till_now, a);
    }

    cout << ans << '\n';

    return 0;
}
