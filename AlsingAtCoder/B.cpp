#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if ((i + 1) % 2 == 1 && t % 2 == 1)
        {
            c++;
        }
    }
    cout << c << endl;
}