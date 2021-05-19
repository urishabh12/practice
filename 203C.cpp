#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, d;
    int a, b;
    cin >> n >> d >> a >> b;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[i] = make_pair(x * a + y * b, i + 1);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    vector<int> val;
    for (auto i : v)
    {
        if (i.first <= d)
        {
            ans++;
            d -= i.first;
            val.push_back(i.second);
        }
    }
    cout << ans << '\n';
    for (int i : val)
    {
        cout << i << ' ';
    }
    cout << '\n';
    return 0;
}
