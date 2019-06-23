#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a string: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'A':
        case 'a':
            printf("A vowel\n");
            break;
        case 'E':
        case 'e':
            printf("A vowel\n");
            break;
        default: printf("Not a vowel\n");
        
    }

}