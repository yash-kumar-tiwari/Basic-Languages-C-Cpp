// string example

#include <stdio.h>
int main()
{
    char name[] = "Yash Tiwari";
    int i = 0;

    while (i < 4)
    {
        printf("%c", name[i]);
        i++;
    }
    printf("\n");
    i = 0;
    while (name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
    printf("\n");

    return 0;
}