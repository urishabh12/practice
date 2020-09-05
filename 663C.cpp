#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int mod = 1e9 + 7;

int main()
{
    ll n;
    cin >> n;
    ll fact = 1;
    ll uni = 1;
    for (int i = 1; i < n; i++)
    {
        fact = (fact * i) % mod;
        uni = (uni * 2) % mod;
    }
    fact = (fact * n) % mod;
    fact = (fact - uni) % mod;
    if (fact < 0)
        fact += mod;
    cout << fact << "\n";
}
