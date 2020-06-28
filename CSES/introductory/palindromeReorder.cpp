#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, arr[26] = {0}, x = 0;
    string prefix = "", mid = "", suffix = "";
    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        int temp = (int)s[i];
        arr[temp - 65] += 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2 != 0)
        {
            x += 1;
        }
    }
    if (x > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] % 2 == 0)
            {
                int temp = arr[i];
                while (temp > 0)
                {
                    prefix += (char)i + 65;
                    suffix += (char)i + 65;
                    temp -= 2;
                }
            }
            else
            {
                for (int j = 0; j < arr[i]; j++)
                {
                    mid += (char)i + 65;
                }
            }
        }
        reverse(suffix.begin(), suffix.end());
        cout << prefix + mid + suffix << endl;
    }
}