#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s1;
    string s2;
    cin >> s1 >> s2;
    long double pos = 0;
    for (char c : s1)
    {
        if (c == '+')
        {
            pos++;
        }
        else
        {
            pos--;
        }
    }
    int unkn = 0;
    for (char c : s2)
    {
        if (c == '?')
        {
            unkn++;
        }
    }
    long double same = 0;
    for (int msk = 0; msk < 2 << unkn; msk++)
    {
        long double curr = 0;
        int i = 0;
        for (char c : s2)
        {
            if (c == '+')
            {
                curr++;
            }
            else if (c == '-')
            {
                curr--;
            }
            else
            {
                if (msk & (1 << i))
                {
                    curr++;
                }
                else
                {
                    curr--;
                }
                i++;
            }
        }
        if (pos == curr)
        {
            same++;
        }
    }

    long double ans = same / (2 << unkn);

    cout << fixed << setprecision(10) << ans << '\n';

    return 0;
}
