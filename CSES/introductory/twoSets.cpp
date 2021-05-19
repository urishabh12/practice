#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, s;
    cin >> n;
    s = n * (n + 1) / 2;
    if (s % 2 == 0)
    {
        cout << "YES" << '\n';
        vector<int> one;
        vector<int> two;
        int move = 0;
        for (int i = n; i > 0; i -= 2)
        {
            if (move == 0)
            {
                move = 1;
                one.push_back(i);
                if (i - 1 > 0)
                {
                    two.push_back(i - 1);
                }
            }
            else
            {
                move = 0;
                if (i - 1 > 0)
                {
                    one.push_back(i - 1);
                }
                two.push_back(i);
            }
        }
        cout << one.size() << '\n';
        for (int i : one)
        {
            cout << i << ' ';
        }
        cout << '\n';
        cout << two.size() << '\n';
        for (int i : two)
        {
            cout << i << ' ';
        }
        cout << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }

    return 0;
}