#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int h, c, t;
        cin >> h >> c >> t;
        int k = h + c / 2;
        if (h >= t)
        {
            cout << 1 << endl;
        }
        else if (k >= t)
        {
            cout << 2 << endl;
        }
        else
        {
            int i = 0;
            int ans = (h + c) * i + h;
            int diff = abs(ans - t);
            int l = 0;
            while (true)
            {
                if (ans > t)
                {
                    l = i;
                    i += 10;
                }
                else
                {
                    i;
                }
            }
        }
    }
}