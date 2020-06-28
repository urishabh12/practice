#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int sum = ((x / 500) * 1000) + (((x % 500) / 5) * 5);
    cout << sum << endl;
}