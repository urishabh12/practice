#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, to = 0;
        string s;
        cin >> n >> k;
        cin >> s;
        for (char c : s)
        {
            if (c == '1')
            {
                to++;
            }
        }
        int ans = to;
        for (int i = 0; i < k; i++)
        {
            int cur = 0;
            for (int j = i; j < n; j += k)
            {
                if (s[j] == '1')
                    cur++;
                else
                    cur--;
                cur = max(cur, 0);
                ans = min(ans, to - cur);
            }
        }
        cout << ans << endl;
    }
}