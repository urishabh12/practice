#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll count = 0;
    string n;
    cin >> n;
    for (char c : n)
        count += ((int)c - '0');
    if (count % 9 == 0)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';

    return 0;
}
