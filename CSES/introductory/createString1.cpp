#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    vector<string> ans;
    cin >> s;
    sort(s.begin(), s.end());
    ans.push_back(s);
    while (next_permutation(s.begin(), s.end()))
    {
        ans.push_back(s);
    }
    cout << ans.size() << endl;
    for (string a : ans)
    {
        cout << a << endl;
    }
}