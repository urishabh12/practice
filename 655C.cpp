#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int first = n + 1, last = -1;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            if (i + 1 == k)
            {
                m[i + 1] = 5;
            }
            else
            {
                m[i + 1] = 10;
                first = min(first, i + 1);
                last = max(last, i + 1);
            }
        }
        if (first == n + 1 & last == -1)
        {
            cout << 0 << endl;
            continue;
        }
        if (first == last)
        {
            cout << 2 << endl;
            continue;
        }
        for (int i = first; i <= last; i++)
        {
            if (m[i] == 5)
            {
                count++;
            }
        }
        cout << count / 2 + 1 + (count % 2) << endl;
    }
}