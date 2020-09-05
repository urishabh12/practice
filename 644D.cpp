#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        int n;
        cin >> n >> k;
        if (k >= n)
        {
            cout << 1 << endl;
        }
        else
        {
            int max_no = 1;
            int second;
            int flag = 0;
            for (int i = 1; i <= sqrt(k); i++)
            {
                if (n % i == 0)
                {
                    max_no = i;
                    second = n / i;
                    if (second < k)
                    {
                        cout << i << endl;
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
            {
                continue;
            }
            second = n / max_no;
            if (second < k)
            {
                cout << max_no << endl;
            }
            else
            {
                cout << second << endl;
            }
        }
    }
}