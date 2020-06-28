#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    ll n, s = 0, a;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        s += a;
    }
    cout << n * (n + 1) / 2 - s << endl;
}