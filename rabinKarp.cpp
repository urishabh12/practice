#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> rabin_karp(string const &s, string const &t)
{
    const int p = 31;
    const int mod = 1e9 + 7;
    int S = s.size(), T = t.size();
    vector<ll> pow(max(S, T));
    pow[0] = 1;
    for (int i = 1; i < pow.size(); i++)
    {
        pow[i] = (pow[i - 1] * p) % mod;
    }
    ll hash_s = 0;
    for (int i = 0; i < S; i++)
    {
        hash_s = (hash_s + (s[i] - 'a' + 1) * pow[i]) % mod;
    }
    vector<ll> hash_t(T + 1, 0);
    for (int i = 0; i < T; i++)
    {
        hash_t[i + 1] = (hash_t[i] + (t[i] - 'a' + 1) * pow[i]) % mod;
    }
    vector<int> occur;
    for (int i = 0; i + S - 1 < T; i++)
    {
        ll curr_h = (hash_t[i + S] + mod - hash_t[i]) % mod;
        if (curr_h == (hash_s * pow[i]) % mod)
        {
            occur.push_back(i);
        }
    }

    return occur;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s = "abc", a = "pqrabccdsabcgh";
    vector<int> ans = rabin_karp(s, a);
    for (int i : ans)
    {
        cout << i << '\n';
    }

    return 0;
}
