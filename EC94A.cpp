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
        string s;
        cin >> n >> s;
        string ans;
        for (int i = 0; i < s.size(); i += 2)
        {
            ans += s[i];
        }
        cout << ans << '\n';
    }
}
