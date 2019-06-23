#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int *pnum1 = &num1;
    int *pnum2 = &num2;
    int a;

    a = *pnum1 + *pnum2;
    printf("%d", a);
    return 0;
}