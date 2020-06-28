#include <stdio.h>

int r()
{
    int x;
    static int num = 7;
    x = num--;
    printf("num:%d\n", x);
    return x;
}

int main()
{
    for (r(); r(); r())
    {
        printf("%d\n", r());
    }
    return 0;
}