#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a = n / k;
        if (m <= a)
        {
            cout << m << endl;
        }
        else
        {
            m -= a;
            if (m > k - 1)
            {
                int z = m / (k - 1);
                int j = m % (k - 1);
                cout << a - (z + min(j, 1)) << endl;
            }
            else
            {
                cout << a - 1 << endl;
            }
        }
    }
}