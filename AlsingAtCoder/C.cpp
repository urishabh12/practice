#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n;
    vector<int> v(n, 0);
    for (int x = 1; x < 101; x++)
    {
        for (int y = 1; y < 101; y++)
        {
            for (int z = 1; z < 101; z++)
            {
                k = (x * x) + (y * y) + (z * z) + (x * y) + (y * z) + (x * z);
                if (k <= n)
                {
                    v[k - 1]++;
                }
            }
        }
    }

    for (int a : v)
    {
        cout << a << endl;
    }
}