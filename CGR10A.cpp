#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            if (v.size() && v.back() != k)
            {
                k += v.back();
                v.pop_back();
                v.push_back(k);
            }
            else
            {
                v.push_back(k);
            }
        }
    }
}
