#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> v1(n);
    vector<ll> v2(m);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i > 0)
        {
            v1[i] = v1[i - 1] + x;
        }
        else
        {
            v1[i] = x;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (i > 0)
        {
            v2[i] = v2[i - 1] + x;
        }
        else
        {
            v2[i] = x;
        }
    }
}