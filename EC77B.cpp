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
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }
        string ans = (((a + b) % 3 == 0) && (2 * a >= b)) ? "YES" : "NO";
        cout << ans << '\n';
    }

    return 0;
}
