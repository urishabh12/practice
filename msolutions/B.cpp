#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int r, g, b, k, c = 0;
    cin >> r >> g >> b >> k;
    while (g <= r)
    {
        g *= 2;
        c++;
    }
    while (b <= g)
    {
        b *= 2;
        c++;
    }
    if (c <= k)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
