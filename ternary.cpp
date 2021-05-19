#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void toTernary(int n)
{
    stack<int> s;
    while (n > 0)
    {
        s.push(n % 3);
        n /= 3;
    }

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    toTernary(n);

    return 0;
}
