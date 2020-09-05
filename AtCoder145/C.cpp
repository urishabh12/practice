#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        v1[i] = i + 1;
    }
    int ans = 0;
    int k = 0;
    do
    {
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            p += sqrt((v[i].first - v[i + 1].first) * (v[i].first - v[i + 1].first) + (v[i].second - v[i + 1].second) * (v[i].second - v[i + 1].second));
        }
        ans += p;
        k++;
    } while (next_permutation(v1.begin(), v1.end()));
    cout << ans / k << endl;
}