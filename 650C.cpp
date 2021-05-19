#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(string &s)
{
    for (char c : s)
    {
        if (c == '1')
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int last = -1;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (last = -1 && s[i] == '0')
            {
                if (i == k)
                {
                    s[0] = '1';
                    ans++;
                }
            }
            if (s[i] == '1')
            {
                break;
            }
        }
        int val;
        for (int i = 0, j = 0; i < n; i++)
        {
            j = i;
            while (j < n && s[j] == '0')
            {
                j++;
            }
            val = j - i;
            ans += (val / (2 * k + 1));
        }
        if (ans == 0 && check(s))
        {
            ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}
