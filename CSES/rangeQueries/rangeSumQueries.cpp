#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    cin >> v[0];
    for (int i = 1; i < n; i++)
    {
        int t;
        cin >> t;
        v[i] += (t + v[i - 1]);
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
            cout << v[b - 1] << '\n';
        else
            cout << v[b - 1] - v[a - 2] << '\n';
    }

    return 0;
}
