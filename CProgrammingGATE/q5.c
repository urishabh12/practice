#include <stdio.h>

void check(int n)
{
    if (n < 0)
    {
        printf("%d\n", n);
    }
    else
    {
        check(n / 2);
        printf("%d\n", n % 2);
    }
}

int main()
{
    int n = 2;
    check(n);
    return 0;
}