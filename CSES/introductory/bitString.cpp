#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll mod = 1e9 + 7;

int main()
{
    ll n, a = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a = 2 * a % ((int)mod);
    }
    cout << a << endl;
}