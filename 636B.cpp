#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if ((n / 2) % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        for (int i = 1; i < n / 2; i += 2)
            cout << i << " ";
        for (int i = (n / 2) + 3; i <= n + 1; i += 2)
            cout << i << " ";
        cout << endl;
    }
}
