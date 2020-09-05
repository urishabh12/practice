#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n);
    vector<int> indeg(n, 0);
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        indeg[b]++;
    }
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        ans.push_back(curr);
        for (int i : v[curr])
        {
            indeg[i]--;
            if (indeg[i] == 0)
                q.push(i);
        }
    }

    for (int a : ans)
        cout << a << " ";
    cout << '\n';
}
