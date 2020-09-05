#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int lcm(int a, int b)
{
    ll ans = a * b;
    int temp = gcd(a, b);
    return ans / temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A = 1, B = n - 1;
        int a, b, val = 1e9 + 5;
        while (A <= B)
        {
            int tem = lcm(A, B);
            if (tem < val)
            {
                val = tem;
                a = A;
                b = B;
            }
            A++;
            B--;
        }
        cout << a << " " << b << endl;
    }
}