#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    ll n, ans;
    cin >> n;
    for (ll i = 5; n / i >= 1; i *= 5)
    {
        ans += n / i;
    }
    cout << ans << endl;
}