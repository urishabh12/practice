#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (n == 2)
        {
            cout << x << " " << y << '\n';
            continue;
        }
        int diff = y - x;
        int jump;
        int tmp;
        for (int i = 1; i <= diff; i++)
        {
            tmp = diff / i;
            if (diff % i == 0 && tmp < n)
            {
                jump = i;
                break;
            }
        }
        n -= tmp;
        n--;
        vector<int> pref;
        int j = x;
        j -= jump;
        while (j > 0 && n > 0)
        {
            pref.push_back(j);
            n--;
            j -= jump;
        }
        reverse(pref.begin(), pref.end());
        for (int i : pref)
            cout << i << " ";
        for (int i = x; i <= y; i += jump)
        {
            cout << i << " ";
        }
        for (int i = 0; i < n; i++)
        {
            y += jump;
            cout << y << " ";
        }
        cout << '\n';
    }
}
