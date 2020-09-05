#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> v;
        int i = 0, j, ans = 0;
        while (i < s.size())
        {
            j = i;
            while (j < s.size() && s[j] == '1')
            {
                j++;
            }
            if (i < j)
                v.push_back(j - i);
            i = max(i + 1, j);
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < v.size(); i += 2)
        {
            ans += v[i];
        }
        cout << ans << "\n";
    }
}
