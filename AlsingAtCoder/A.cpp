#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int l, r, d, c = 0;
    cin >> l >> r >> d;
    while (l <= r)
    {
        if (l % d == 0)
        {
            c++;
        }
        l++;
    }
    cout << c << endl;
}