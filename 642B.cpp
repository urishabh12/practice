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
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            cin >> v1[i];
        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end());
        for (int i = 0; i < k; i++)
        {
            if (v[i] < v1[n - i - 1])
            {
                v[i] = v1[n - i - 1];
            }
        }
        int ans = accumulate(v.begin(), v.end(), 0);
        cout << ans << endl;
    }
}