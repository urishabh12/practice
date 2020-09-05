#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, open = 0, close = 0;
        string s;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                open++;
            }
            else
            {
                close++;
            }
            if (close > open)
            {
                count++;
                close--;
            }
        }
        cout << count << endl;
    }
}