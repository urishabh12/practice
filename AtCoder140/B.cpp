#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    int a[n], b[n], c[n - 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> c[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] == 1)
        {
            s += c[a[i] - 1 - 1];
        }
    }
    s += accumulate(b, b + n, 0);
    cout << s << endl;
}