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
        se.insert({b, a});
    }
    int c = 0, l = 0;
    for (array<int, 2> a : se)
    {
        if (a[1] >= l)
        {
            c++;
            l = a[0];
        }
    }
    cout << c << endl;
}