#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct segtree
{

    int size;
    vector<int> val;

    void init(int n)
    {
        size = 1;
        while (size < n)
        {
            size *= 2;
        }
        val = vector<int>(2 * size, 0);
    }

    void set(int i, int v, int lx, int rx, int x)
    {
        if (rx - lx == 1)
        {
            val[x] = v;
            return;
        }
        int m = (rx + lx) / 2;
        if (m > i)
            set(i, v, lx, m, 2 * x + 1);
        else
            set(i, v, m, rx, 2 * x + 2);

        val[x] = min(val[2 * x + 1], val[2 * x + 2]);
    }

    void set(int i, int v)
    {
        set(i, v, 0, size, 0);
    }

    int minVal(int l, int r, int lx, int rx, int x)
    {
        if (lx >= r || l >= rx)
        {
            return INT_MAX;
        }

        if (lx >= l && rx <= r)
        {
            return val[x];
        }

        int m = (lx + rx) / 2;
        int s1 = minVal(l, r, lx, m, 2 * x + 1);
        int s2 = minVal(l, r, m, rx, 2 * x + 2);

        return min(s1, s2);
    }

    int minVal(int l, int r)
    {
        return minVal(l, r, 0, size, 0);
    }
};

int main()
{
    int n, q;
    cin >> n >> q;
    segtree s;
    s.init(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.set(i, a);
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int ans = s.minVal(l - 1, r);
        cout << ans << '\n';
    }

    return 0;
}
