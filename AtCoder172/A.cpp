#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int a, ans;
    cin >> a;
    int t = a;
    ans = a;
    for (int i = 0; i < 2; i++)
    {
        a *= t;
        ans += a;
    }
    cout << ans << endl;
}