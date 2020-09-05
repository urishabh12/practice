#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, count = 0;
        unordered_map<ll, ll> umap;
        bool flag = false;
        cin >> n;
        umap[n] = 1;
        while (n != 1)
        {
            if (n % 6 == 0)
            {
                n /= 6;
            }
            else
            {
                n *= 2;
            }
            count++;
            if (umap[n] == 1)
            {
                flag = true;
                break;
            }
            else
            {
                umap[n] = 1;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}