#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    set<array<int, 2>> se;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        se.insert({a, 1});
        se.insert({b, -1});
    }
    int c = 0, mx = 0;
    for (array<int, 2> a : se)
    {
        c += a[1];
        mx = max(c, mx);
    }
    cout << mx << endl;
}