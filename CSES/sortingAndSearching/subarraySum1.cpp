#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    int curr = v[0];
    int ans = 0;
    for (int i = 0, j = 1; i < n; i++)
    {
        while (j < n && curr < x)
        {
            curr += v[j];
            j++;
        }
        if (curr == x)
        {
            ans++;
        }
        curr -= v[i];
    }
    cout << ans << '\n';

    return 0;
}
