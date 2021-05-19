#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int one = 0, zero = 0;
    vector<bool> must_zero(k);
    vector<bool> must_one(k);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            must_one[i % k] = true;
        else if (s[i] == '0')
            must_zero[i % k] = true;
    }
    for (int i = 0; i < k; i++)
    {
        if (must_one[i] && must_zero[i])
        {
            cout << "NO" << '\n';
            return;
        }
        one += must_one[i];
        zero += must_zero[i];
    }
    if (one > k / 2 || zero > k / 2)
    {
        cout << "NO" << '\n';
    }
    else
    {
        cout << "YES" << '\n';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
