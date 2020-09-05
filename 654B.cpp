#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        long long ans;
        cin >> n >> r;
        long long j = min(n, r);
        ans = j * (j - 1) / 2;
        if (r >= n)
        {
            ans += 1;
        }
        else
        {
            ans += j;
        }
        cout << ans << endl;
    }
}