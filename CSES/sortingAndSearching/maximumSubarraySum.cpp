#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    ll max_sofar = -1e18;
    ll sum_current = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        sum_current += t;
        max_sofar = max(max_sofar, sum_current);
        if (sum_current < 0)
        {
            sum_current = 0;
        }
    }
    cout << max_sofar << endl;
}