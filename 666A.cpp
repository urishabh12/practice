#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool ok = true;
        string s;
        cin >> n;
        vector<int> v(26, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (char c : s)
            {
                v[c - 'a']++;
            }
        }
        for (int i : v)
        {
            if (i % n != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
