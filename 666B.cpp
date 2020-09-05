#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int mx = 1e5 + 1;

int solve(int a1, int a2, int v, int b)
{
    int on = a1, tw = a2;
    int ans1 = 1, ans2 = 1;
    int b2 = b;
    while (b > 0)
    {
        if (b & 1)
            ans1 *= a1;
        a1 *= a1;
        b >>= 1;
    }
    while (b2 > 0)
    {
        if (b2 & 1)
            ans2 *= a2;
        a2 *= a2;
        b2 >>= 1;
    }
    if (abs(a1 - v) > abs(a2 - v))
        return on;
    else
        return tw;
}

int main()
{
    int n;
    ll ans = 0;
    cin >> n;
    vector<int> v(n);
    for (auto a : v)
        cin >> a;
    sort(v.begin(), v.end());
    double t = 1 / (double)(n - 1);
    double a = pow(v[n - 1], t);
    int val = solve(a, a + 1, v[n - 1], n - 1);
    cout << setprecision(10) << val << " " << a << " " << t << '\n';
    int k = val;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ans += (v[i] - 1);
        }
        else
        {
            ans += abs(v[i] - val);
            val *= t;
        }
    }

    cout << ans << '\n';
}
