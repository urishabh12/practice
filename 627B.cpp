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
        bool flag = false;
        vector<int> a(n);
        vector<vector<int>> b(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]].push_back(i);
        }
        for (int i = 0; i < n; i++)
        {
            for (int k : b[a[i]])
            {
                if (k > i + 1)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (flag)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}
