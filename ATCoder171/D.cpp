#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, a;
    ll s = 0;
    cin >> n;
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (umap[a])
        {
            umap[a]++;
        }
        else
        {
            umap[a] = 1;
        }
        s += a;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        ll b, c, x;
        cin >> b >> c;
        if (umap[b])
        {
            x = umap[b] * b;
            s -= x;
            x = umap[b] * c;
            s += x;
            cout << s << endl;
            if (umap[c])
            {
                umap[c] += umap[b];
            }
            else
            {
                umap[c] = umap[b];
            }
            umap[b] = 0;
        }
        else
        {
            cout << s << endl;
        }
    }
}