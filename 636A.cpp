#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int j = 2;
        for (int i = 2; i <= 29; i++)
        {
            j *= 2;
            int k = j - 1;
            if (n % k == 0)
            {
                cout << n / k << endl;
                break;
            }
        }
    }
}