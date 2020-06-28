#include <iostream>
#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int main()
{
    int X, Y, A, B, C;
    cin >> X >> Y >> A >> B >> C;
    int a[A], b[B], c[C], suum[X + Y + C];
    int initialSum = 0;
    for (int i = 0; i < A; i++)
        cin >> a[i];
    for (int i = 0; i < B; i++)
        cin >> b[i];
    for (int i = 0; i < C; i++)
        cin >> c[i];

    sort(a, a + A, greater<>());
    sort(b, b + B, greater<>());
    sort(c, c + C, greater<>());
    for (int i = 0; i < X; i++)
    {
        suum[i] = a[i];
    }
    for (int i = 0; i < Y; i++)
    {
        suum[X + i] = b[i];
    }
    for (int i = 0; i < C; i++)
    {
        suum[X + Y + i] = c[i];
    }
    sort(suum, suum + (X + Y + C), greater<>());
    cout << accumulate(suum, suum + (X + Y), initialSum) << endl;
}
