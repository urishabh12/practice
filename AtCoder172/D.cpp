#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll j = 1;
        ll a = i * j;
        while (a <= n)
        {
            arr[a - 1]++;
            j++;
            a = i * j;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        ans += (arr[i] * (i + 1));
    }
    cout << ans << endl;
}