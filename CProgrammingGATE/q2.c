#include <stdio.h>
int jumble(int x, int y)
{
    x = 2 * x + y;
    return x;
}

int main()
{
    int x = 2;
    int y = 5;
    y = jumble(y, x);
    printf("%d\n", y);
    x = jumble(y, x);
    printf("%d\n", x);
    return 0;
}