#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> v(n);
    set<ll> s;
    s.insert(0);
    ll curr = 0;
    for (auto &it : v)
    {
        cin >> it;
    }
    ll ans = 0;
    for (ll i : v)
    {
        curr += i;
        if (s.find(curr) != s.end())
        {
            ans++;
            s.clear();
            s.insert(0);
            curr = i;
        }
        s.insert(curr);
    }
    cout << ans << '\n';
    return 0;
}
