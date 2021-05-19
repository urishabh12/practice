#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int ans = -1e9 + 1;
vector<int> vis(101, 0);
vector<vector<pair<int, int>>> g(101);

void dfs(int curr, int cost)
{
    ans = max(ans, cost);
    vis[curr] = 1;

    for (auto it : g[curr])
    {
        if (vis[it.first] == 0)
        {
            dfs(it.first, it.second + cost);
            vis[it.first] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        g[a].push_back(make_pair(b, c));
        g[b].push_back(make_pair(a, c));
    }

    dfs(0, 0);

    cout << ans << '\n';

    return 0;
}
