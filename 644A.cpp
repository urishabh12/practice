#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            a += a;
            cout << a * a << endl;
        }
        else if (a > b)
        {
            if (b + b < a)
            {
                cout << a * a << endl;
            }
            else
            {
                b += b;
                cout << b * b << endl;
            }
        }
        else
        {
            if (a + a < b)
            {
                cout << b * b << endl;
            }
            else
            {
                a += a;
                cout << a * a << endl;
            }
        }
    }
}