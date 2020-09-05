#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int modulo = 1e9 + 7;

int main()
{
    int n, k;
    ll ans = 1;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    if (k == n)
    {
        ans = accumulate(v.begin(), v.end(), 1, multiplies<>());
        cout << ans % modulo << endl;
        return 0;
    }
    while (k > 0)
    {
        if (k == 1)
        {
            if (ans < 0 && min(v[i], v[j]) <= 0)
            {
            }
        }
        if (v[i] * v[i + 1] < v[j] * v[j - 1])
        {
            ans *= (v[j] * v[j - 1]);
            j -= 2;
            k -= 2;
        }
        else
        {
            ans *= (v[i] * v[i + 1]);
            i += 2;
            k -= 2;
        }
    }
    cout << ans % modulo << endl;
}