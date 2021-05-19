#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    sort(v.begin(), v.end());
    int tmp = v[k - 1];
    if (k == 0)
    {
        if (v[k] > 1)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    else
    {
        if (k == n)
        {
            cout << tmp << '\n';
        }
        else if (tmp == v[k])
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << tmp << '\n';
        }
    }

    return 0;
}
