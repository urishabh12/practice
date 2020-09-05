#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 4;
    int m = 5;
    int arr[n][m] = {{1, 2, 3, 4, 17}, {5, 6, 7, 8, 18}, {9, 10, 11, 12, 19}, {13, 14, 15, 16, 20}};
    for (int k = 0; k < n; k++)
    {
        int i = k;
        int j = 0;
        while (j < m && j < k + 1)
        {
            cout << arr[i][j] << " ";
            j++;
            i--;
        }
        cout << endl;
    }
    for (int k = 1; k < m; k++)
    {
        int j = k;
        int i = n - 1;
        while (j < m && i >= 0)
        {
            cout << arr[i][j] << " ";
            i--;
            j++;
        }
        cout << endl;
    }
}