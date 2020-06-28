#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n];
    ll b[m];
    ll c = 0;
    ll boo = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0, j = 0; i < n; i++)
    {
        while (j < m && a[i] > b[j] && c <= k)
        {
            c += b[j];
            boo++;
            j++;
        }
        if (c >= k)
        {
            break;
        }
        c += a[i];
        boo++;
    }
    if (c > k)
    {
        boo--;
    }
    cout << boo << endl;
}