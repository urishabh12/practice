#include <bits/stdc++.h>

using namespace std;

class LRUCache
{
    unordered_map<int, list<pair<int, int>>::iterator> m;
    int size;
    list<pair<int, int>> l;

public:
    LRUCache(int capacity)
    {
        size = capacity;
    }

    int get(int key)
    {
        if (m.count(key))
        {
            auto it = m[key];
            int val = it->second;
            l.erase(it);
            l.push_back(make_pair(key, val));
            return val;
        }
        else
        {
            set(key, -1);
            return -1;
        }
    }

    void set(int key, int val)
    {
        if (l.size() == size && m.count(key) == 0)
        {
            auto it = l.end();
            it--;
            int k = it->first;
            m.erase(k);
            l.erase(it);
        }
        if (m.count(key) == 0)
        {
            l.push_back(make_pair(key, val));
            m[key] = --l.end();
        }
        else
        {
            auto it = m[key];
            l.push_back(make_pair(key, val));
            l.erase(it);
            m[key] = --l.end();
        }
    }
};

int main()
{
    LRUCache ch(2);
    ch.set(0, 9);
    ch.set(4, 8);
    cout << ch.get(1) << '\n';
    ch.set(0, 5);
    cout << ch.get(0) << '\n';
    cout << ch.get(0) << '\n';

    return 0;
}