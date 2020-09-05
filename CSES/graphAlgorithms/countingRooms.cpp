#include <bits/stdc++.h>

using namespace std;

char arr[1001][1001];
bool vis[1001][1001];
int N, M;

bool isValid(int x, int y)
{
    if (x > N || y > M || x < 1 || y < 1)
        return false;
    if (vis[x][y] == true || arr[x][y] == '#')
        return false;
    return true;
}

void dfs(int x, int y)
{
    vis[x][y] = true;
    if (isValid(x + 1, y))
        dfs(x + 1, y);
    if (isValid(x, y + 1))
        dfs(x, y + 1);
    if (isValid(x - 1, y))
        dfs(x - 1, y);
    if (isValid(x, y - 1))
        dfs(x, y - 1);
}

int main()
{
    int c = 0;
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (arr[i][j] == '.' && vis[i][j] == false)
            {
                dfs(i, j);
                c++;
            }
        }
    }
    cout << c << "\n";
}