#include <bits/stdc++.h>
#include <curl/curl.h>

using namespace std;
using ll = long long;

void qualityOfChocolates(vector<vector<int>> queries, vector<int> sweet, vector<int> exp_time, int n)
{
    sort(sweet.begin(), sweet.end());
    sort(exp_time.begin(), exp_time.end());

    int q = queries.size();

    for (int i = 0; i < n; i++)
    {
        int x = queries[i][0];
        int y = queries[i][1];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
