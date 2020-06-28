#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, ans = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < k; i++)
    {
        ans += arr[i];
    }
    cout << ans << endl;
}