#include <bits/stdc++.h>

using namespace std;

struct segtree
{
    int size;
    vector<int> val;

    void init(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        val.assign(2 * size, 0);
    }

    void set(int i, int v, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            val[x] = v;
            return;
        }
        int m = (rx + lx) / 2;
        if (i < m)
        {
            set(i, v, 2 * x + 1, lx, m);
        }
        else
        {
            set(i, v, 2 * x + 2, m, rx);
        }

        val[x] = min(val[2 * x + 1], val[2 * x + 2]);
    }

    void set(int i, int v)
    {
        set(i, v, 0, 0, size);
    }

    int minVal(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r || l >= rx)
            return INT_MAX;
        if (lx >= l && rx <= r)
            return val[x];
        int m = (lx + rx) / 2;
        int s1 = minVal(l, r, 2 * x + 1, lx, m);
        int s2 = minVal(l, r, 2 * x + 2, m, rx);
        return min(s1, s2);
    }

    int minVal(int l, int r)
    {
        return minVal(l, r, 0, 0, size);
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    segtree st;
    st.init(n);
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        st.set(i, v);
    }
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int i, v;
            cin >> i >> v;
            st.set(i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            int ans = st.minVal(l, r);

            cout << ans << "\n";
        }
    }

    return 0;
}
