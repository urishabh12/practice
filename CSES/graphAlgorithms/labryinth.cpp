#include <bits/stdc++.h>

using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
char ds[] = {'R', 'L', 'D', 'U'};
char arr[1001][1001];
int dis[1001][1001];
vector<vector<char>> vis;
stack<char> s;
int N, M, a1, a2, b1, b2;

bool va(int x, int y)
{
    return (x >= 0 && y >= 0 && x < N && y < M && arr[x][y] == '.');
}

bool vb(int x, int y)
{
    return (x >= 0 && y >= 0 && x < N && y < M && vis[x][y] != 'Z');
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        vector<char> k(M, 'Z');
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'A')
                a1 = i, a2 = j, arr[i][j] = '#';
            if (arr[i][j] == 'B')
                b1 = i, b2 = j, arr[i][j] = '.';
        }
        vis.push_back(k);
    }
    queue<array<int, 2>> q;
    q.push({a1, a2});
    dis[a1][a2] = 1;
    vis[a1][a2] = 'A';
    while (q.size())
    {
        array<int, 2> a = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ni = a[0] + dx[i], nj = a[1] + dy[i];
            if (ni == b1 && nj == b2)
            {
                cout << "YES" << endl;
                string ans;
                ans += ds[i];
                dis[b1][b2] = dis[a[0]][a[1]] + 1;
                int qq, pp;
                while (ni != a1 || nj != a2)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        qq = ni + dx[j];
                        pp = nj + dy[j];
                        if (!vb(qq, pp))
                            continue;
                        if (vis[qq][pp] != 'Z' && dis[qq][pp] == dis[ni][nj] - 1)
                        {
                            ans += vis[qq][pp];
                            ni = qq;
                            nj = pp;
                            break;
                        }
                    }
                }
                ans.pop_back();
                reverse(ans.begin(), ans.end());
                cout << ans.size() << endl;
                cout << ans << endl;
                return 0;
            }

            if (!va(ni, nj))
                continue;
            q.push({ni, nj});
            vis[ni][nj] = ds[i];
            dis[ni][nj] = dis[a[0]][a[1]] + 1;
            arr[ni][nj] = '#';
        }
    }
    cout << "NO" << endl;
}