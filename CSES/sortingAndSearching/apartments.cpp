#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n, m, k, r, c = 0;
    unordered_map<int, int> umap;
    cin >> n >> m >> k;
    ll a[n];
    ll b[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    for (int i = 0, j = 0; i < n; i++)
    {
        while (j < m && a[i] - k > b[j])
        {
            j++;
        }
        if (j < m && b[j] <= a[i] + k)
        {
            c++;
            j++;
        }
    }
    cout << c << endl;
}