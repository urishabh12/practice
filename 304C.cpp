#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n;
    cin >> k;
    list<int> a(k);
    for (auto &it : a)
    {
        cin >> it;
    }
    cin >> k;
    list<int> b(k);
    for (auto &it : b)
    {
        cin >> it;
    }
    list<int> c = a, d = b;
    int cnt = 0, ans;
    int flag = true;
    do
    {
        if (cnt > 107)
        {
            break;
        }
        if (c.size() == 0)
        {
            ans = 2;
            flag = false;
            break;
        }
        else if (d.size() == 0)
        {
            ans = 1;
            flag = false;
            break;
        }
        cnt++;
        int i = c.front();
        int j = d.front();
        c.pop_front();
        d.pop_front();
        if (i < j)
        {
            d.push_back(i);
            d.push_back(j);
        }
        else
        {
            c.push_back(j);
            c.push_back(i);
        }
    } while (c != a || d != b);

    if (flag)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << cnt << " " << ans << '\n';
    }

    return 0;
}
