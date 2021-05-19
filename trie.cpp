#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct Trie
{
    struct Trie *children[26];
    bool isEnd;
};

Trie *root = new Trie();

void add(string s)
{
    int n = s.size();
    Trie *curr = root;

    for (int i = 0; i < n; i++)
    {
        int a = s[i] - 'a';
        if (curr->children[a] == nullptr)
        {
            curr->children[a] = new Trie();
            curr->isEnd = false;
        }

        curr = curr->children[a];
    }

    curr->isEnd = true;
}

bool isAvailable(string s)
{
    int n = s.size();
    Trie *curr = root;

    for (int i = 0; i < n; i++)
    {
        int a = s[i] - 'a';
        if (curr->children[a] == nullptr)
        {
            return false;
        }
        curr = curr->children[a];
    }

    return curr->isEnd;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    add("amanda");
    add("wakanda");
    add("papa");

    cout << isAvailable("amanda") << '\n';
    cout << isAvailable("waka") << '\n';

    return 0;
}
