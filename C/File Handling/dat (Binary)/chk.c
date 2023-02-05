#include <stdio.h>

#define display(i, limit)               \
    while (i <= limit)                  \
    {                                   \
        printf("Statement :  %d\n", i); \
        i++;                            \
    } // function like macro

void main()
{
    int i = 1;
    display(i, 5);
}