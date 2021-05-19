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
        for (auto &it : v)
            cin >> it;
        vector<int> ans(n);
        vector<int> alt(n);
        for (int i = 0; i < n; i++)
        {
            alt[i] = i + 1;
        }
        int last = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != last)
            {
                ans[i] = v[i];
                last = v[i];
                alt[v[i] - 1] = 0;
            }
        }
        for (int i : ans)
        {
            cout << i << ' ';
        }
        cout << '\n';
    }

    return 0;
}
