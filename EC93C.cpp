#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0, x, a = 0;
        unordered_map<int, int> m;
        cin >> n;
        vector<int> v(n);
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            a += (s[i] - '0');
            x = a - i - 1;
            m[x]++;
            ans += (m[x] - 1);
        }
        cout << ans << '\n';
    }
}
