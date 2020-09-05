#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n = 8, x, y = 599;
    cin >> x;
    while (x > y)
    {
        y += 200;
        n--;
    }
    cout << n << "\n";
}
