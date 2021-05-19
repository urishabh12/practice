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
        int n;
        cin >> n;
        int ans = 1e9;
        for (int i = 1; i * i <= n; i++)
        {
            ans = min(ans, i - 1 + ((n - i) + i - 1) / i);
        }
        cout << ans << '\n';
    }
    return 0;
}
