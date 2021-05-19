#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class consistent_hashing
{
private:
    vector<string> ring;
    int size = 0;

public:
    void add(string s)
    {
        ring.push_back(s);
        size++;
    }

    string get(string s)
    {
        int pr = 43;
        int mod = 1e9 + 9;
        int pr_pow = 1;
        int val;
        int hash_value = 0;

        for (int i = 0; i < s.size(); i++)
        {
            val = s[i] - 'A';
            val = max(val, 0);
            hash_value = (hash_value + val * pr_pow) % mod;
            pr_pow = (pr_pow * pr) % mod;
        }

        return ring[hash_value % size];
    }
};

class unique_key
{
private:
    int size = 5;
    int alpha_size = 62;
    string last_used = "AAAAA";
    //too lazy to add all characters
    vector<char> alphabets = {'A', 'B', 'C', 'D',
                              'E', 'F', 'G', 'H', 'I', 'J', 'K',
                              'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                              'S', 'T', 'U', 'V', 'W', 'X', 'Y',
                              'Z', 'a', 'b', 'c', 'd', 'e', 'f',
                              'g', 'h', 'i', 'j', 'k', 'l', 'm',
                              'n', 'o', 'p', 'q', 'r', 's', 't',
                              'u', 'v', 'w', 'x', 'y', 'z', '0',
                              '1', '2', '3', '4', '5', '6', '7',
                              '8', '9'};

public:
    string getNext()
    {
        int i = size - 1;

        while (i >= 0 && last_used[i] == alphabets[alpha_size - 1])
        {
            last_used[i] = alphabets[0];
            i--;
        }

        for (int j = 0; i >= 0 && j < alpha_size; j++)
        {
            if (last_used[i] == alphabets[j])
            {
                last_used[i] = alphabets[j + 1];
                break;
            }
        }

        return last_used;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unique_key uk;

    for (int i = 0; i < 100; i++)
    {
        cout << uk.getNext() << '\n';
    }

    // consistent_hashing ch;

    // ch.add("5432");
    // ch.add("5433");
    // ch.add("5434");

    // cout << ch.get("54GHz") << '\n';
    // cout << ch.get("54GHK") << '\n';
    // cout << ch.get("Ptrq4") << '\n';
    // cout << ch.get("54GHz") << '\n';

    return 0;
}
