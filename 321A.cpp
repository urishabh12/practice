#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    int k = 1, ans = 1;
    for (auto &a : v)
        cin >> a;
    for (int i = 1; i < n; i++)
    {
        if (v[i] >= v[i - 1])
        {
            k++;
        }
        else
        {
            k = 1;
        }
        ans = max(ans, k);
    }
    cout << ans << '\n';
}
