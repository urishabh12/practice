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
        vector<int> a(n), l(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : l)
            cin >> i;
        vector<int> val;
        for (int i = 0; i < n; i++)
        {
            if (l[i] == 0)
            {
                val.push_back(a[i]);
            }
        }
        sort(val.begin(), val.end(), greater<int>());
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (l[i] == 0)
            {
                a[i] = val[j];
                j++;
            }
        }
        for (int i : a)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
}
