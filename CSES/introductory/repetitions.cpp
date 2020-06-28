#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    ll n, count = 1, max_count = 0;
    string str;
    getline(cin, str);
    char last_char = str[0];
    n = str.size();
    for (ll i = 1; i < n; i++)
    {
        char temp = str[i];
        if (last_char == temp)
        {
            count += 1;
        }
        else
        {
            last_char = str[i];
            max_count = max(max_count, count);
            count = 1;
        }
    }
    cout << max(max_count, count) << endl;
}