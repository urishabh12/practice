#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    string t;
    ll c = 0;
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            c++;
        }
    }
    cout << c << endl;
}