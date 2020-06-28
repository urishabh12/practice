#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n, med;
    ll d = 0;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    med = arr[n / 2];
    for (int i = 0; i < n; i++)
    {
        d += abs(arr[i] - med);
    }
    cout << d << endl;
}