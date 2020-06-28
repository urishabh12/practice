#include <iostream>

using namespace std;

int main()
{
    int k, a, b, flag = 0;
    cin >> k >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i % k == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "NG" << endl;
    }
}