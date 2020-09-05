#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s = "leetcode";
    int n = s.size();
    vector<int> v(26, 0);
    for (char c : s)
        v[c - 97]++;
    for (char c : s)
    {
        if (v[c - 97] == 1)
            cout << c;
    }
    cout << "\n";
    return 0;
}
