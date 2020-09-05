#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string a = "1";
        string b = "1";
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '0')
                a += '0', b += '0';
            else if (s[i] == '1')
            {
                a += '1';
                b += '0';
                for (int j = i + 1; j < n; j++)
                {
                    a += '0';
                    b += s[j];
                }
                break;
            }
            else
                a += '1', b += '1';
        }
        cout << a << endl;
        cout << b << endl;
    }
}