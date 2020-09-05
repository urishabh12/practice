#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, a, b, ans = 0;
        cin >> x >> y >> a >> b;
        if (2 * a > b)
            ans += b * min(x, y);
        else
        {
            ans += a * (x + y);
            cout << ans << "\n";
            continue;
        }
        ans += a * abs(x - y);
        cout << ans << "\n";
    }
}