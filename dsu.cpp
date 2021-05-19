#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class dsu
{

public:
    vector<int> v;

    dsu(int size)
    {
        v = vector<int>(size, -1);
    }

    void join(int a, int b)
    {
        if (v[a] == -1 && v[b] == -1)
        {
            v[a] = a;
            v[b] = a;
        }
        else if (v[a] != -1 && v[b] != -1)
        {
            v[v[b]] = v[v[a]];
        }
        else if (v[b] != -1)
        {
            v[a] = v[v[b]];
        }
        else if (v[a] != -1)
        {
            v[b] = v[v[a]];
        }
    }

    int find(int a)
    {
        return v[v[a]];
    }
};