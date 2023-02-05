// string accessing through pointer with input taken from user

#include <stdio.h>
int main()
{
    char name[40];
    printf("Enter String:");
    // scanf("%s", name);
    // scanf("%[^\n]s", name);
    gets(name);
    printf("Name: %s\n", name);

    return 0;
}