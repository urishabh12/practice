#include <iostream>

using namespace std;
using ll = long long;
ll peak = 1e18;

int main()
{
    ll n, temp, sum = 1;
    bool flag = true;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        if (temp == 0)
        {
            cout << 0 << endl;
            return 0;
        }
        if (peak / temp <= sum)
        {
            flag = false;
        }
        if (flag)
        {
            sum *= temp;
        }
    }
    if (flag)
    {
        cout << sum << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}