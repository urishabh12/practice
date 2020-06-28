#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int i = 0, j = n - 1;
    while (true)
    {
        ll dif1, dif2, dif3;
        dif1 = arr[i] + arr[i + 1];
    }
}