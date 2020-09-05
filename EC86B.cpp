#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int z = 0, o = 0;
        for (char c : s)
        {
            if (c == '1')
                o++;
            else
                z++;
        }
        if (z == 0 || o == 0)
        {
            cout << s << "\n";
            continue;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                cout << 10;
            }
            cout << "\n";
        }
    }
}
