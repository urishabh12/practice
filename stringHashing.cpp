#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll compute_hash(string s)
{
    const int p = 31;
    const int m = 1e9 + 7;
    ll h_val = 0;
    ll pow_v = 1;
    for (char c : s)
    {
        h_val = (h_val + (c - 'a' + 1) * pow_v) % m;
        pow_v = (pow_v * p) % m;
    }

    return h_val;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cout << compute_hash("hello") << '\n';
    cout << compute_hash("hello") << '\n';
}
