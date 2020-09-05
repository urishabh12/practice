#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string k;
        for (int i = 0; i < 9; i++)
        {
            cin >> k;
            for (char c : k)
            {
                if (c == '4')
                {
                    cout << '3';
                }
                else
                {
                    cout << c;
                }
            }
            cout << endl;
        }
    }
}