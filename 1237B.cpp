#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    unordered_map<int, int> m;
    int ans = 0;
    for (int i = 0, j = 0; i < n; i++)
    {
        if (m[a[i]])
        {
            continue;
        }
        if (a[i] == b[j])
        {
            j++;
        }
        else
        {
            m[b[j]]++;
            j++;
            i--;
            ans++;
        }
    }
    cout << ans << '\n';

    return 0;
}
