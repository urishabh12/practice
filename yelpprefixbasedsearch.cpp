#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct Trie
{
    unordered_map<char, Trie *> characters;
    bool isEnd;
    vector<int> allDict;

    Trie()
    {
        isEnd = false;
    }
};

Trie *root = new Trie();
vector<Trie *> whitespace;
vector<string> dict;

void add(string s)
{
    Trie *curr = root;
    int n = s.size();
    dict.push_back(s);
    int pos = dict.size() - 1;
    curr->allDict.push_back(pos);

    for (int i = 0; i < n; i++)
    {
        if (curr->characters[s[i]] == nullptr)
        {
            curr->characters[s[i]] = new Trie();
        }

        if (s[i] == ' ')
        {
            whitespace.push_back(curr->characters[s[i]]);
        }

        curr = curr->characters[s[i]];
        curr->allDict.push_back(pos);
    }

    curr->isEnd = true;
}

vector<string> search_util(string s, Trie *node, vector<int> &vis)
{
    int n = s.size();

    Trie *curr = node;

    for (int i = 0; i < n; i++)
    {
        if (curr->characters[s[i]] == nullptr)
        {
            return {" "};
        }

        curr = curr->characters[s[i]];
    }

    vector<string> res;
    for (int it : curr->allDict)
    {
        if (vis[it] == 0)
        {
            vis[it] = 1;
            res.push_back(dict[it]);
        }
    }

    return res;
}

vector<string> search(string s)
{
    int n = s.size();
    int m = whitespace.size();
    vector<string> ans;
    vector<int> vis(dict.size(), 0);
    for (int i = 0; i < m; i++)
    {
        vector<string> res = search_util(s, whitespace[i], vis);
        if (res[0] != " ")
        {
            ans.insert(ans.end(), res.begin(), res.end());
        }
    }

    vector<string> res = search_util(s, root, vis);
    if (res[0] != " ")
    {
        ans.insert(ans.end(), res.begin(), res.end());
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    add("burger king");
    add("McDonald's");
    add("super duper burger's");
    add("subway");
    add("pizza hut");

    vector<string> ans = search("duper bur");

    for (string s : ans)
    {
        cout << s << '\n';
    }

    return 0;
}
