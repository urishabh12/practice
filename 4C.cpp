#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int mx = 1e5 + 1;

int main()
{
    unordered_map<string, unsigned int> m;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (!m.count(s))
        {
            m[s] = 1;
            cout << "OK"
                 << "\n";
        }
        else
        {
            for (int i = 1; i < mx; i++)
            {
                s += (char)i;
                if (!m.count(s))
                {
                    m[s] = 1;
                    cout << s << "\n";
                    break;
                }
                else
                    s.pop_back();
            }
        }
    }

    return 0;
}
