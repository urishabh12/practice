#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n, k, c = 0;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll i = 0, j = n - 1;
    while (i <= j)
    {
        if (arr[i] + arr[j] <= k)
        {
            c++;
            i++;
            j--;
        }
        else
        {
            c++;
            j--;
        }
    }
    cout << c << endl;
}