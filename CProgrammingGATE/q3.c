#include <stdio.h>

int main()
{
    int a[] = {2, 4, 6, 8, 10}, sum = 0;
    int *b = a + 4;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *b - i);
        printf("%d\n", *(b - i));
        printf("-------\n");
        sum = sum + (*b - i) - *(b - i);
    }
    printf("%d\n", sum);
    return 0;
}