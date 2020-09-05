#include <bits/stdc++.h>

using namespace std;

long long powrec(int a, int b)
{
    if (b == 0)
        return 1;
    long long temp = pow(a, b / 2);
    long long result = temp * temp;
    if (b % 2 == 1)
        result *= a;
    return result;
}

long long powiter(int a, int b)
{
    long long result = 1;
    while (b)
    {
        if (b % 2)
            result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << powrec(a, b) << endl;
    cout << powiter(a, b) << endl;
}