#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        string s;
        cin >> s >> x;
        int n = s.size();
        string ans = string(n, '1');
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (i - x >= 0)
                    ans[i - x] = '0';
                if (i + x < n)
                    ans[i + x] = '0';
            }
        }
        string tmp;
        for (int i = 0; i < n; i++)
        {
            if (i - x >= 0 && ans[i - x] == '1' || i + x < n && ans[i + x] == '1')
                tmp += '1';
            else
                tmp += '0';
        }

        if (tmp == s)
            cout << ans << '\n';
        else
            cout << -1 << '\n';
    }
}
