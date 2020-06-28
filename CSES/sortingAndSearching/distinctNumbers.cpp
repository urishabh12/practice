#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n, c = 1;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (ll i = 1; i < n; i++)
    {
        if (arr[i - 1] != arr[i])
        {
            c++;
        }
    }
    cout << c << endl;
}