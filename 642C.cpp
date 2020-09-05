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
        long long ans = 0;
        long long k = (n - 1) / 2;
        for (long long i = 1; i <= k; i++)
        {
            ans += (i * i);
        }
        ans *= 8;
        cout << ans << endl;
    }
}