// string palindrome

#include <stdio.h>
#include <string.h>

int main()
{
    char str[30], rev[30];
    // int len, i, j = 0, f = 0;
    int len, i, j = 0, f = 0;

    printf("Enter String:");
    gets(str); // scanf("%s", str);
    len = strlen(str);

    for (i = len - 1; i >= 0; i--)
    {
        rev[j++] = str[i];
    }
    rev[j++] = '\0';

    printf("Reverse:%s\n", rev);

    for (i = 0; i <= len; i++)
    {
        if (str[i] != rev[i])
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
