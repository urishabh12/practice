#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int arr[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0, j = 0; i < n; i++)
    {
        while (j < n && m[arr[j]] < 1)
        {
            m[arr[j]]++;
            j++;
        }
        ans = max(j - i, ans);
        m[arr[i]]--;
    }
    cout << ans << endl;
}