#include <iostream>
using namespace std;

int main()
{
    int k;
    int n;
    cin >> k >> n;
    int arr[n];
    int maxint = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            maxint = max(maxint, (k - arr[i]) + arr[0]);
        }
        else
        {
            maxint = max(maxint, arr[i + 1] - arr[i]);
        }
    }
    cout << k - maxint << endl;
}