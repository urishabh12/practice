/*
ID: upadhay1
TASK: ride
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);

    string a, b;
    cin >> a >> b;
    ll i = 1, j = 1;
    for (char c : a)
    {
        i *= ((c - 'A') + 1);
    }
    for (char c : b)
    {
        j *= ((c - 'A') + 1);
    }
    if (i % 47 == j % 47)
    {
        cout << "GO" << '\n';
    }
    else
    {
        cout << "STAY" << '\n';
    }

    return 0;
}
