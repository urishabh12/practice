#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int ans = 0;
    vector<int> deg(n + 1, 0);
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        deg[a]++;
        deg[b]++;
    }
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (deg[i] == 1)
        {
            q.push(i);
            deg[i]--;
        }
    }
    while (true)
    {
        if (!q.empty())
        {
            ans++;
            while (!q.empty())
            {
                int curr = q.front();
                q.pop();
                for (int i : adj[curr])
                {
                    deg[i]--;
                }
            }
        }
        else
        {
            break;
        }
        for (int i = 1; i <= n; i++)
        {
            if (deg[i] == 1)
            {
                q.push(i);
                deg[i]--;
            }
        }
    }
    cout << ans << '\n';
}