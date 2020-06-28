#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        stack<char> st;
        int c = 0;
        cin >> s;
        st.push(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (st.size() > 0 && st.top() != s[i])
            {
                st.pop();
                c++;
            }
            else
            {
                st.push(s[i]);
            }
        }
        if (c % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
}