#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        vector<int> v1(2 * n);
        for (int i = 0; i < 2 * n; i++)
            cin >> v1[i];
        for (int i = 0; i < 2 * n; i++)
        {
            int a = v1[i];
            if (v[a - 1] == 0)
            {
                v[a - 1] = 1;
                cout << a << " ";
            }
        }
        cout << endl;
    }
}