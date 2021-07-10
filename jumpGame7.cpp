#include <bits/stdc++.h>
#include <curl/curl.h>

using namespace std;
using ll = long long;

int get_last(vector<int> v, int val)
{
    int l = 0, r = v.size() - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (v[mid] == val)
        {
            ans = v[mid];
            break;
        }
        else if (v[mid] < val)
        {
            ans = v[mid];
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return ans;
}

bool canReach(string s, int minJump, int maxJump)
{
    int n = s.size();
    int diff = maxJump - minJump;
    bool ans = false;
    //set<int> start;
    vector<int> start;
    set<int> end;
    start.push_back(minJump);
    end.insert(maxJump);
    for (int i = 1; i < n; i++)
    {
        int last_possible = max(0, i - maxJump);
        int st = get_last(start, i);
        int en = *end.lower_bound(i);
        if (st == -1)
        {
            continue;
        }
        if (s[i] == '0' && en - st <= diff && st <= i && en >= i)
        {
            start.push_back(i + minJump);
            end.insert(i + maxJump);
            if (i == n - 1)
            {
                ans = true;
            }
        }
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    canReach("011010", 2, 3);

    return 0;
}
