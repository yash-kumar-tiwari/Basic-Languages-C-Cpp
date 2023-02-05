// String  Compare - pre define

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20];
    printf("Enter 1st String:");
    gets(s1);
    printf("Enter 2nd String:");
    gets(s2);

    if (strcmp(s1, s2) == 0)
        printf("Both are Equal\n");
    else
        printf("Not Equal\n");

    return 0;
}