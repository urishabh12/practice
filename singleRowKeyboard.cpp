#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string keyboard = "abcdefghijklmnopqrstuvwxy";
    string text = "cbacd";
    int ans = 0;
    unordered_map<char, int> m;
    for (int i = 0; i < keyboard.size(); i++)
    {
        m[keyboard[i]] = i + 1;
    }
    int last_pos = 1;
    for (int i = 0; i < text.size(); i++)
    {
        ans += abs(m[text[i]] - last_pos);
        last_pos = m[text[i]];
    }

    cout << ans << '\n';
}
