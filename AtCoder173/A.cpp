#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    int ans = n % 1000;
    if (ans == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1000 - ans << endl;
    }
}
