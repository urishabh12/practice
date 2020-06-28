#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll temp, prev, count = 0, diff;
    cin >> prev;
    for (ll i = 0; i < n - 1; ++i)
    {
        cin >> temp;
        if (temp < prev)
        {
            diff = prev - temp;
            count += diff;
            prev = temp + diff;
        }
        else
        {
            prev = temp;
        }
    }
    cout << count << endl;
}