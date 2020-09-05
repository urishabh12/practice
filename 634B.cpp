#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int i = 0;
        for (int i = 0; i < n; i++)
        {
            char x = (char)97 + (i % b);
            cout << x;
        }
        cout << endl;
    }
}
