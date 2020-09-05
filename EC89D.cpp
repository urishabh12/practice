#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j < v[i]; j++)
        {
            int t = gcd(j, v[i]);
            if (t == 1)
            {
                cout << j << " " << v[i] << endl;
            }
        }
    }
}