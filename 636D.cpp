#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<int> eq(2 * k + 1);
        for (int i = 0; i < n / 2; i++)
        {
            eq[v[i] + v[n - i - 1]]++;
        }
        vector<int> pref(2 * k + 2);
        for (int i = 0; i < n / 2; i++)
        {
            int a1 = v[i] + 1, b1 = v[i] + k;
            int a2 = v[n - i - 1] + 1, b2 = v[n - i - 1] + k;
            pref[min(a1, a2)]++;
            pref[max(b1, b2) + 1]--;
        }
        for (int i = 2; i <= 2 * k + 2; i++)
        {
            pref[i] += pref[i - 1];
        }
        int ans = 1e9;
        for (int i = 2; i <= 2 * k; i++)
        {
            ans = min(ans, (pref[i] - eq[i]) + ((n / 2 - pref[i]) * 2));
        }
        cout << ans << endl;
    }
}