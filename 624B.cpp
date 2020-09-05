#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        sort(b.begin(), b.end());
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 == b[j])
            {
                while (j < m - 1 && b[j] + 1 == b[j + 1])
                    j++;
                sort(a.begin() + i, a.begin() + b[j] + 1);
                j = min(j + 1, m - 1);
            }
        }
        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
                ok = false;
        }
        if (ok)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}
