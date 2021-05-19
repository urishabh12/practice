#include <bits/stdc++.h>
#include <ctime>

using namespace std;
using ll = long long;

class TokenBucket
{
private:
    int maxBucketSize;
    //Will be tokens per second
    int refillRate;

    int currentBucketSize;
    int lastRefillTime;

public:
    TokenBucket(int maxSize, int refill)
    {
        maxBucketSize = maxSize;
        refillRate = refill;

        currentBucketSize = maxSize;
        lastRefillTime = time(nullptr);
    }

    bool allowRequest(int token)
    {
        refill();

        if (currentBucketSize >= token)
        {
            currentBucketSize -= token;
            return true;
        }

        return false;
    }

private:
    void refill()
    {
        int now = time(nullptr);
        int tokenToAdd = ((now - lastRefillTime) / 1000) * refillRate;

        currentBucketSize = min(currentBucketSize + tokenToAdd, maxBucketSize);
        lastRefillTime = now;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    TokenBucket tb(10, 1);

    for (int i = 0; i < 100; i++)
    {
        cout << tb.allowRequest(1) << endl;
    }

    return 0;
}
