#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class HashTable
{
private:
    static int const hashGroup = 10;
    list<pair<int, string>> hashTable[hashGroup];

public:
    bool isEmpty();
    void addElement(int key, string value);
    void removeElement(int key);
    int hashFunction(int key);
    string getElement(int key);
};

bool HashTable::isEmpty()
{
    int tot = 0;
    for (int i = 0; i < hashGroup; i++)
    {
        tot += hashTable[i].size();
    }

    return tot;
}

int HashTable::hashFunction(int key)
{
    return key % hashGroup;
}

void HashTable::addElement(int key, string value)
{
    int hashKey = hashFunction(key);
    auto &block = hashTable[hashKey];
    auto itr = begin(block);
    bool isPresent = false;

    for (; itr != end(block); itr++)
    {
        if (itr->first == key)
        {
            itr->second = value;
            isPresent = true;
            cout << "[WARNING] Value updated for key " << key << '\n';
            break;
        }
    }

    if (!isPresent)
    {
        block.push_back(make_pair(key, value));
    }
}

void HashTable::removeElement(int key)
{
    int hashKey = hashFunction(key);
    auto &block = hashTable[hashKey];
    auto itr = begin(block);
    bool isRemoved = false;

    for (; itr != end(block); itr++)
    {
        if (itr->first == key)
        {
            isRemoved = true;
            itr = block.erase(itr);
            break;
        }
    }

    if (!isRemoved)
    {
        cout << "[Warning] Key not found" << '\n';
    }
}

string HashTable::getElement(int key)
{
    int hashKey = hashFunction(key);
    auto &block = hashTable[hashKey];
    auto itr = begin(block);

    for (; itr != end(block); itr++)
    {
        if (itr->first == key)
        {
            return itr->second;
        }
    }

    return "Not Found";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
