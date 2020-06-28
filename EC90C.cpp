#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c = 0;
        long long ans = s.size();
        stack<int> sta;
        char plus = '+';
        char minus = '-';
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == plus)
            {
                c++;
            }
            else
            {
                c--;
            }
            if (c < 0)
            {
                if (sta.size() == 0)
                {
                    sta.push(c);
                    ans += i + 1;
                }
                else if (sta.top() > c)
                {
                    sta.push(c);
                    ans += i + 1;
                }
            }
        }
        cout << ans << endl;
    }
}