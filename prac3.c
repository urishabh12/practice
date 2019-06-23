#include <stdio.h>

int checkn(int a)
{
    if (a%2==0) return 0;
    else return 1;
}

int main()
{
    int a, flag;
    printf("Enter a number: ");
    scanf("%i", &a);
    flag = checkn(a);
    if (flag==0) printf("EVEN\n");
    else printf("ODD\n");
}
