#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int t = x;
    if (y % 2 != 0)
    {
        x *= x;
        y--;
    }
    while (y > 1)
    {
        y /= 2;
        x *= x;
    }
    cout << x << endl;
}