#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, new_s;
        cin >> n;
        cin >> s;
        for (int i = 1; i < n; i++)
        {
            if (s.substr(i - 1, 1) == "1" && s.substr(i, 1) == "0")
            {
                if (s.substr(i + 1, 1) == "0")
                {
                }
            }
        }
        cout << s << endl;
    }
}