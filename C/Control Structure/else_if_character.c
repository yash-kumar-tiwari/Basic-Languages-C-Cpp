// else if statement to check which character is upper case or lower case
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Character:\n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("You Entered an Upper Case Character\n");
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf("You Entered an Lower Case Character\n");
    }

    else if (ch >= 48 && ch <= 57)
    {
        printf("You Entered an Number\n");
    }
    else
    {
        printf("Special Character\n");
    }

    return 0;
}