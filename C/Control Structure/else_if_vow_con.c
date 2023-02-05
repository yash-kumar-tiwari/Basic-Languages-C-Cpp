// else if statement to check vowels and consonant
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Character :\n");
    scanf("%c", &ch);

    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        printf("You Entered An Vowel\n");
    }

    else if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
        printf("You Entered An Vowel\n");
    }
    else
    {
        printf("You Entered An Consonant\n");
    }

    return 0;
}
