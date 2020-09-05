#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int z = n % x;
        if (z == y)
        {
            cout << n << endl;
        }
        else if (z > y)
        {
            cout << n - (z - y) << endl;
        }
        else
        {
            cout << n - abs(x - y) - z << endl;
        }
    }
}