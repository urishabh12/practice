#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    for (int i = 0; i < n - 1; i++)
    {
        int t;
        cin >> t;
        x ^= t;
    }
    cout << x << endl;
}