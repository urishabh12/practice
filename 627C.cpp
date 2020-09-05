#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k = -1;
        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                ans = max(ans, i - k);
                k = i;
            }
        }
        ans = max(ans, n - k);
        cout << ans << "\n";
    }
}