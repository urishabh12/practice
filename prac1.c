#include <stdio.h>

int main()
{
    int a=10;

    if(a > 10) a++;
    else if(a > 20) a--;
    else ++a;
    printf("%i\n", a);
    return 0;
}