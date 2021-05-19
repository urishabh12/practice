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
        vector<string> v(n);
        for (auto &it : v)
        {
            cin >> it;
        }
        unordered_map<string, int> mp1;
        unordered_map<string, int> mp2;
        for (auto i : v)
        {
            mp1[i]++;
        }
        int ans = 0;
        for (auto it : mp1)
        {
            if (it.second > 1)
            {
                ans += (it.second - 1);
            }
        }
        cout << ans << '\n';
        for (int i = 0; i < n; i++)
        {
            if (mp1[v[i]] - mp2[v[i]] > 1)
            {
                char par = v[i][3];
                string val = v[i];
                for (int j = 0; j <= 9; j++)
                {
                    char tmp = '0' + j;
                    if (tmp == par)
                    {
                        continue;
                    }
                    val[3] = tmp;
                    if (mp1[val] == 0)
                    {
                        cout << val << '\n';
                        mp1[val]++;
                        break;
                    }
                }
                mp2[v[i]]++;
            }
            else
            {
                cout << v[i] << '\n';
                mp2[v[i]]++;
            }
        }
    }

    return 0;
}
