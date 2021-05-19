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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l, r;
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (abs(v[i] - v[i - 1]) > 1)
            {
                l = i;
                r = i + 1;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            cout << l << " " << r << '\n';
        }
    }

    return 0;
}
