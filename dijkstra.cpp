#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void dijkstra(vector<vector<pair<int, int>>> &v, int so, int d)
{
    int n = v.size(), cnt = 0;
    set<pair<int, int>> s;
    vector<int> dis(n, 1e9);
    s.insert({0, so});
    vector<int> vis(n, 0);

    while (cnt < n)
    {
        pair<int, int> p = *s.begin();
        s.erase(s.begin());
        int val = p.first;
        int vec = p.second;
        if (vis[vec] == 0)
        {
            cnt++;
        }
        vis[vec] = 1;
        dis[vec] = min(dis[vec], val);
        for (int i = 0; i < v[vec].size(); i++)
        {
            if (vis[v[vec][i].first] == 0)
            {
                s.insert({val + v[vec][i].second, v[vec][i].first});
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << ' ' << dis[i] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<pair<int, int>>> v = {
        {{1, 2}, {2, 6}},
        {{0, 2}, {3, 5}},
        {{0, 6}, {3, 8}},
        {{1, 5}, {2, 8}, {5, 15}, {4, 10}},
        {{3, 10}, {5, 6}, {6, 2}},
        {{3, 15}, {4, 6}, {6, 6}},
        {{2, 4}, {5, 6}}};

    dijkstra(v, 0, 3);

    return 0;
}
