#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n, a;
    string s;
    cin >> n;
    while (n >= 1)
    {
        a = n % 26;
        if (a == 0)
        {
            a = 26;
        }
        n -= a;
        s += (char)97 + a - 1;
        n /= 26;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}