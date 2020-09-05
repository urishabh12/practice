#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    ll ans = v[0];
    n -= 2;
    int i = 1;
    while (n > 0)
    {
        if (n == 1)
        {
            ans += v[i];
            n -= 1;
        }
        else
        {
            ans += (v[i] * 2);
            i++;
            n -= 2;
        }
    }
    cout << ans << endl;
}