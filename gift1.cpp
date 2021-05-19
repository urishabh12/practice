/*
ID: upadhay1
TASK: gift1
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);

    int n;
    cin >> n;
    unordered_map<string, int> m;
    vector<string> ss(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s] = 0;
        ss[i] = s;
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        int amt, ppl;
        cin >> s >> amt >> ppl;
        if (ppl == 0)
        {
            continue;
        }
        int val = amt / ppl;
        m[s] -= amt;
        m[s] += (amt - (val * ppl));
        for (int j = 0; j < ppl; j++)
        {
            string rec;
            cin >> rec;
            m[rec] += val;
        }
    }

    for (string s : ss)
    {
        cout << s << ' ' << m[s] << '\n';
    }

    return 0;
}
