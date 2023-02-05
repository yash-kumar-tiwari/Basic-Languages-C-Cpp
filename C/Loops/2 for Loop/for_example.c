// to check how while loop works
#include <stdio.h>
int main()
{
    int i ;                     // initialization
    for (i=1 ; i <= 5; i++) //------>initialization; condition; loop counter;
    {
        printf("Value of i = %d\n", i);
        printf("Good Morning\n");
    }

    // while (i>=5)       ------> it run and exit
    // {
    //     printf("Value of i = %d\n", i);
    //     printf("Good Morning\n");
    //     i++;
    // }

    return 0;
}