#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    ll ans = 1;
    for (int c = n - 2; c > 0; c--)
    {
        int val = n - c;
        for (int i = 1; i <= sqrt(val); i++)
        {
            if (val % i == 0)
            {
                int k = val / i;
                if (k == i)
                {
                    ans++;
                }
                else
                {
                    ans += 2;
                }
            }
        }
    }
    cout << ans << '\n';

    return 0;
}
