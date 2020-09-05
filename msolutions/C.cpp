#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    vector<ll> v2(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    v2[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        if (i <= k - 1)
        {
            v2[i] = v[i] * v2[i - 1];
        }
        else
        {
            v2[i] = (v2[i - 1] / v[i - k]) * v[i];
            if (v2[i] > v2[i - 1])
                cout << "Yes"
                     << "\n";
            else
                cout << "No"
                     << "\n";
        }
    }
}
