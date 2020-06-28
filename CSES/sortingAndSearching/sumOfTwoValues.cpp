#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (m.find(x - t) != m.end())
        {
            cout << m[x - t] << " " << i + 1 << endl;
            return 0;
        }
        m[t] = i + 1;
    }
    cout << "IMPOSSIBLE" << endl;
}