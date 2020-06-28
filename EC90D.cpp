#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, isum = 0;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            v.push_back(t);
            if (i % 2 == 0)
            {
                isum += t;
            }
        }
        ll curr_sum = 0, max_sum = 0;
        for (int i = 0; i < n - 1; i += 2)
        {
            curr_sum += (v[i + 1] - v[i]);
            if (curr_sum < 0)
            {
                curr_sum = 0;
            }
            max_sum = max(max_sum, curr_sum);
        }
        curr_sum = 0;
        for (int i = 1; i < n - 1; i += 2)
        {
            curr_sum += (v[i] - v[i + 1]);
            if (curr_sum < 0)
            {
                curr_sum = 0;
            }
            max_sum = max(max_sum, curr_sum);
        }
        cout << isum + max_sum << endl;
    }
}
