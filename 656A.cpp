#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int check(int x, int y, int z, int a, int b, int c)
{
    if (a != b && b != c && a != c)
    {
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, a, b;
        cin >> x >> y >> z;
        if (x != y && y != z && x != z)
        {
            cout << "NO" << endl;
            continue;
        }
        if (x == y)
        {
            a = x;
            b = z;
        }
        else if (y == z)
        {
            a = y;
            b = x;
        }
        else
        {
            a = x;
            b = y;
        }
        if (a < b)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << max(b - 1, 1) << endl;
        }
    }
}