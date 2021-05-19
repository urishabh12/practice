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
        int n, x;
        cin >> n >> x;
        if (n <= 2)
        {
            cout << 1 << '\n';
            continue;
        }
        n -= 2;
        int ans = n / x;
        if (n % x > 0)
        {
            ans++;
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}
