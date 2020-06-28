#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll a = 100, x, c = 0;
    cin >> x;
    while (a < x)
    {
        a += a / 100;
        c++;
    }
    cout << c << endl;
}