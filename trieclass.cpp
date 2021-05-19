#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class TrieNode
{
public:
    TrieNode *children[26];
    bool isEnd;

    TrieNode()
    {
        isEnd = false;
    }
};

class Trie
{
public:
    TrieNode *root = new TrieNode();

    void add(string s)
    {
        int n = s.size();
        TrieNode *curr = root;

        for (int i = 0; i < n; i++)
        {
            int a = s[i] - 'a';
            if (curr->children[a] == nullptr)
            {
                curr->children[a] = new TrieNode();
            }
            curr = curr->children[a];
        }

        curr->isEnd = true;
    }

    bool isAvailable(string s)
    {
        int n = s.size();
        TrieNode *curr = root;

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
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    Trie root;
    root.add("amanda");
    root.add("obama");

    cout << root.isAvailable("obama") << '\n';
    cout << root.isAvailable("ob") << '\n';

    return 0;
}
