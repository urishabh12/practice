#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int cnt = 0;
    string s;
    for (int i = 0; i < 15; i++)
    {
        cout << v[i] << endl;
        cin >> s;
        if (s == "yes")
        {
            cnt++;
            if (v[i] * v[i] <= 100)
            {
                cout << v[i] * v[i] << endl;
                cin >> s;
                if (s == "yes")
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    if (cnt >= 2)
    {
        cout << "composite" << endl;
    }
    else
    {
        cout << "prime" << endl;
    }

    return 0;
}
