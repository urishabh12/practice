#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = n;
    for (int i = 1; i < 3; i++)
    {
        n *= s;
    }
    cout << n << endl;
}