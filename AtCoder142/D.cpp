#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPrime(ll a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ll a, b, ans = 0;
    cin >> a >> b;
    vector<ll> v;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            v.push_back(i);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (isPrime(v[i]) && b % v[i] == 0)
        {
            ans++;
        }
        if (isPrime(v[i]))
        {
            cout << v[i] << endl;
        }
    }
    cout << ans + 1 << endl;
}