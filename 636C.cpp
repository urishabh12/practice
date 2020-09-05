#include <bits/stdc++.h>

using namespace std;

bool sign(long long x)
{
    if (x > 0)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long sum = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
        {
            int cur = v[i];
            int j = i;
            while (j < n && sign(v[i]) == sign(v[j]))
            {
                cur = max(cur, v[j]);
                j++;
            }
            sum += cur;
            i = j - 1;
        }
        cout << sum << endl;
    }
}