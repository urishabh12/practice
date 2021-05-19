#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> one(n + 1, 0);
        vector<int> zero(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zero[i + 1] += 1;
            }
            zero[i + 1] += zero[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one[i + 1] += 1;
            }
            one[i + 1] += one[i];
        }
        int ans = 1e9;
        for (int i = 1; i <= n; i++)
        {
            ans = min(ans, zero[i - 1] + one[n] - one[i]);
            ans = min(ans, zero[n] + one[i - 1] - zero[i]);
        }
        cout << ans << '\n';
    }

    return 0;
}
