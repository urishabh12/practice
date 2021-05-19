#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<vector<char>> v(5, vector<char>(4));

bool isValid(int x, int y)
{
    return x > 0 && y > 0 && x < 5 && y < 4 && v[x][y] != 'a';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    v[1][1] = '1';
    v[1][2] = '2';
    v[1][3] = '3';
    v[2][1] = '4';
    v[2][2] = '5';
    v[2][3] = '6';
    v[3][1] = '7';
    v[3][2] = '8';
    v[3][3] = '9';
    v[4][2] = '0';
    v[4][1] = 'a';
    v[4][3] = 'a';
    string s;
    int n;
    cin >> n >> s;
    vector<pair<int, int>> move;
    pair<int, int> start;
    pair<int, int> last;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (v[i][j] == s[0])
            {
                last = make_pair(i, j);
                start = last;
            }
        }
    }
    for (int k = 1; k < n; k++)
    {
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                if (v[i][j] == s[k])
                {
                    int del1, del2;
                    pair<int, int> temp = make_pair(i, j);
                    del1 = temp.first - last.first;
                    del2 = temp.second - last.second;
                    move.push_back(make_pair(del1, del2));
                    last = temp;
                }
            }
        }
    }
    bool flag = true;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (v[i][j] == 'a' || (start.first == i && start.second == j))
            {
                continue;
            }
            int sz = 1;
            int x = i;
            int y = j;
            for (auto a : move)
            {
                x += a.first;
                y += a.second;
                if (isValid(x, y))
                {
                    sz++;
                }
                else
                {
                    break;
                }
            }
            if (sz == n)
            {
                flag = false;
            }
        }
    }
    if (flag)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
    return 0;
}
