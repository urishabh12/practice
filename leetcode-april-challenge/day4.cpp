#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {0, 1, 0, 3, 12};
    int n = v.size();
    int pt = 0;
    for (int a : v)
    {
        if (a != 0)
        {
            v[pt] = a;
            pt++;
        }
    }
    for (int i = pt; i < n; i++)
    {
        cout << pt << endl;
        v[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}