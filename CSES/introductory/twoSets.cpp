#include <iostream>

using namespace std;

int main()
{
    int n, s;
    cin >> n;
    s = n * (n + 1) / 2;
    if (s % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}