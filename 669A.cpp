#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, one = 0, zero = 0;
        cin >> n;
        vector<int> v(n);
        for (auto &a : v)
        {
            cin >> a;
            if (a)
                one++;
        }
        zero = n - one;
        if (one <= n / 2)
        {
            cout << zero << '\n';
            for (int i = 0; i < zero; i++)
                cout << "0" << ' ';
            cout << '\n';
        }
        else
        {
            cout << one - (one % 2) << '\n';
            for (int i = 0; i < one - (one % 2); i++)
                cout << '1' << ' ';
            cout << '\n';
        }
    }
}
