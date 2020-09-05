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
        vector<int> v(n);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i > 0 && v[i] != v[i - 1])
                flag = false;
        }
        if (flag)
        {
            cout << 1 << endl;
            while (n--)
                cout << 1 << " ";
            cout << endl;
            continue;
        }
        if (n % 2 == 0)
        {
            cout << 2 << endl;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    cout << 1 << " ";
                else
                    cout << 2 << " ";
            }
            cout << endl;
            continue;
        }
        if (v[n - 1] != v[n - 2] && v[n - 1] != v[0])
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                if (v[i] == v[i - 1])
                    cout << 2 << endl;
                else if (v[i] == v[0])
                    cout << 1 << endl;
                else
                    cout << 3 << endl;
            }
            else if (i % 2 == 0)
                cout << 1 << " ";
            else
                cout << 2 << " ";
        }
    }
}