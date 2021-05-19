#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int ans = 0;
string s;
// U D L R
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

vector<vector<bool>> vis(7, vector<bool>(7, false));

bool isValid(int x, int y)
{
    return x >= 0 && y >= 0 && x < 48 && y < 48;
}

void solve(int i, int x, int y)
{
    if (!isValid(x, y))
    {
        return;
    }
    if (vis[x][y])
    {
        return;
    }
    if (x == 6 && y == 0)
    {
        if (i == 48)
        {
            ans++;
        }
        return;
    }
    if (i == 48)
    {
        return;
    }
    vis[x][y] = true;
    if (s[i] == 'U')
    {
        solve(i + 1, x + dx[0], y + dy[0]);
    }
    else if (s[i] == 'D')
    {
        solve(i + 1, x + dx[1], y + dy[1]);
    }
    else if (s[i] == 'L')
    {
        solve(i + 1, x + dx[2], y + dy[2]);
    }
    else if (s[i] == 'R')
    {
        solve(i + 1, x + dx[3], y + dy[3]);
    }
    else
    {
        if (i == 0)
        {
            solve(i + 1, 1, 0);
        }
        else
        {
            for (int j = 0; j < 4; j++)
            {
                int X = x + dx[j];
                int Y = y + dy[j];
                solve(i + 1, X, Y);
            }
        }
    }
    vis[x][y] = false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> s;
    solve(0, 0, 0);

    cout << ans << '\n';

    return 0;
}
