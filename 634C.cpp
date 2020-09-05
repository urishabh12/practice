#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            m[k]++;
        }
        for (auto a : m)
        {
            c = max(a.second, c);
        }
        int q = m.size();
        if (q == c)
        {
            cout << q - 1 << endl;
        }
        else
        {
            cout << min(q, c) << endl;
        }
    }
}