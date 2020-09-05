#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sm, mx, ans = -1;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sm = v[0];
        mx = v[0];
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] > v[i] && v[i] < v[i + 1])
            {
            }
        }
        cout << ans << endl;
    }
}