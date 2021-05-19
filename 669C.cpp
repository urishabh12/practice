#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int check(int x, int y)
{
    cout << "? " << x + 1 << ' ' << y + 1 << endl;
    int res;
    cin >> res;
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ans(n, -1);
    int curr = 0;
    for (int i = 1; i < n; i++)
    {
        int a = check(i, curr);
        int b = check(curr, i);
        if (a > b)
        {
            ans[i] = a;
        }
        else
        {
            ans[curr] = b;
            curr = i;
        }
    }
    ans[curr] = n;
    cout << "! ";
    for (int i : ans)
    {
        cout << i << ' ';
    }
    cout << endl;
}
