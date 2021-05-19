#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    ll lastA = 0, lastB = 0;
    ll a, b;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (lastA == a && lastB == b)
        {
            continue;
        }
        ll l = max(lastA, lastB);
        ll r = min(a, b);
        ans += max(0LL, r - l + 1);
        if (lastA == lastB && lastA != 0)
        {
            ans--;
        }
        lastA = a;
        lastB = b;
    }
    if (ans == 0)
    {
        ans++;
    }

    cout << ans << '\n';

    return 0;
}
