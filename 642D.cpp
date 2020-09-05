#include <bits/stdc++.h>

using namespace std;

struct cmp
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const
    {
        int lena = a.second - a.first + 1;
        int lenb = b.second - b.first + 1;
        if (lena == lenb)
            return a.first < b.first;
        return lena > lenb;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        set<pair<int, int>, cmp> s;
        s.insert({0, n - 1});
        for (int i = 1; i <= n; i++)
        {
            pair<int, int> c = *s.begin();
            s.erase(s.begin());
            int id = (c.second + c.first) / 2;
            v[id] = i;
            if (c.first < id)
                s.insert({c.first, id - 1});
            if (c.second > id)
                s.insert({id + 1, c.second});
        }
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }
}