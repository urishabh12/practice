#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s = "0123456789";
    for (int i = 1; i < 1000000; i++)
    {
        next_permutation(s.begin(), s.end());
    }
    cout << s << '\n';

    return 0;
}
