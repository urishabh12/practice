#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n);
    for (auto &it : a)
    {
        cin >> it;
    }
    for (auto &it : b)
    {
        cin >> it;
    }
    vector<int> cpy = a;
    sort(b.begin(), b.end());
    bool flag = true;
    int ans = 1e9;
    for (int i = 0; i < n; i++)
    {
        int x = (b[0] - a[i] + m) % m;
        for (int j = 0; j < n; j++)
        {
            cpy[j] = (cpy[j] + x) % m;
        }
        sort(cpy.begin(), cpy.end());
        for (int j = 0; j < n; j++)
        {
            if (cpy[j] != b[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans = min(x, ans);
        }
        flag = true;
        cpy = a;
    }

    cout << ans << '\n';

    return 0;
}
