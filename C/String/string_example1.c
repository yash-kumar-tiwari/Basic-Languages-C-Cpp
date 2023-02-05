//  string accessing through pointer

#include <stdio.h>
int main()
{
    char name[] = "Yash Tiwari";
    char *ptr;
    ptr = &name[0]; // ptr=name;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}