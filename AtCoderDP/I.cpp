#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int N;
vector<double> v;

double solve(int i, int k)
{
    if (i == N && k == 0)
        return (double)1;
    else if (i == N)
        return (double)0;

    return (v[i] * solve(i + 1, k - 1)) + ((1 - v[i]) * solve(i + 1, k));
}

int main()
{
    cin >> N;
    v = vector<double>(N);
    for (auto &a : v)
        cin >> a;
    double ans = solve(0, N / 2);
    cout << fixed << setprecision(10) << ans << '\n';
}
