#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 1);
    for (int i = 2; i <= n / 2; i++)
    {
        int j = 2;
        int a = i * j;
        while (a < n)
        {
            arr[a - 1] = 0;
            j++;
            a = i * j;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1 && arr[n - i - 1] == 1)
        {
            cout << i + 1 << " " << n - i - 1 << endl;
            break;
        }
    }
}