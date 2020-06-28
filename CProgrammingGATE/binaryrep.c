#include <stdio.h>

void binrep(int n)
{
    if (n > 1)
        binrep(n >> 1);
    printf("%d", n & 1);
}

int main()
{
    int n = 10;
    binrep(n);
    return 0;
}