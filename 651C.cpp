#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        if (n == 1)
        {
            cout << "FastestFinger" << endl;
            continue;
        }
        if (n == 2)
        {
            cout << "Ashishgup" << endl;
            continue;
        }
        if (n % 2 != 0)
        {
            cout << "Ashishgup" << endl;
            continue;
        }
        else
        {
            while (true)
            {
                int flag = 0;
                for (int i = 3; i < n / 2; i += 2)
                {
                    if (n % i == 0)
                    {
                        flag = 1;
                        c += 1;
                        n /= i;
                        break;
                    }
                }
                if (flag == 0)
                {
                    if (c % 2 == 0)
                    {
                        cout << "FastestFinger" << endl;
                        break;
                    }
                    else
                    {
                        cout << "Ashishgup" << endl;
                        break;
                    }
                }
                else
                {
                    flag = 0;
                }
            }
        }
    }
}