#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (n == 2)
        {
            cout << m << endl;
            continue;
        }
        int a = m / 2;
        int b = m - a;
        long long ans = a * 2 + b * 2;
        cout << ans << endl;
    }
}