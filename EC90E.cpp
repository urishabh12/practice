#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int digSum(ll n)
{
    int ans = 0;
    while (n != 0)
    {
        ans += (n % 10);
        n /= 10;
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    ll i = 1;
    ll ans = 0;
    ans = 0;
    for (int j = 0; j <= k; j++)
    {
        ans += digSum(i + j);
    }
    i++;
    while (ans != n)
    {
        ans -= digSum(i - 1);
        ans += digSum(i + k);
        i++;
    }
    cout << i - 1 << endl;
}