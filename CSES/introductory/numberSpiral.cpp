#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll y, x, z, ans;
        cin >> x >> y;
        z = max(y, x);
        if (z % 2)
        {
            if (z == y)
            {
                ans = z * z - x + 1;
            }
            else
            {
                ans = (z - 1) * (z - 1) + y;
            }
        }
        else
        {
            if (z == y)
            {
                ans = (z - 1) * (z - 1) + x;
            }
            else
            {
                ans = z * z - y + 1;
            }
        }
        cout << ans << endl;
    }
}