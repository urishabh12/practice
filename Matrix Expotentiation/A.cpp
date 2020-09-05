#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    double p;
    cin >> n >> p;
    double prob_happy = 1;
    while (n > 0)
    {
        if (n % 2)
            prob_happy = prob_happy * (1 - p) + (1 - prob_happy) * p;
        p = p * (1 - p) + (1 - p) * p;
        n /= 2;
    }
    cout << fixed << setprecision(10) << prob_happy << "\n";
}
