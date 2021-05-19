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
        string s;
        cin >> s;
        int even = 0, odd = 0;
        int k;
        if (n % 2 == 0)
        {
            k = 1;
        }
        else
        {
            k = 0;
        }
        for (int i = k; i < n; i += 2)
        {
            int j = s[i] - '0';
            if (j % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (k == 0)
        {
            if (odd > 0)
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 2 << '\n';
            }
        }
        else
        {
            if (even > 0)
            {
                cout << 2 << '\n';
            }
            else
            {
                cout << 1 << '\n';
            }
        }
    }
}
