#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0, j = 0; i < n; i++)
    {
        j = i;
        while (j < n && s[j] == '1' || s[j] == '2')
        {
            j++;
        }
        if (j == i)
        {
        }
        else if (j - 1 != i)
        {
            sort(s.begin() + i, s.begin() + j);
            i = j - 1;
        }
    }
    for (int i = 0, j = 0; i < n; i++)
    {
        j = i;
        while (j < n && s[j] == '1' || s[j] == '0')
        {
            j++;
        }
        if (j == i)
        {
        }
        else if (j - 1 != i)
        {
            sort(s.begin() + i, s.begin() + j);
            i = j - 1;
        }
    }

    cout << s << '\n';

    return 0;
}
