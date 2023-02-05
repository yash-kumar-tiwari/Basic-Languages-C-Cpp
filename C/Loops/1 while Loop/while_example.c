// to check how while loop works
#include <stdio.h>
int main()
{
    int i = 1; // initialization
    while (i<=5)   //------>condition
    {
        printf("Value of i = %d\n", i);
        printf("Good Morning\n");
        i++;  //------> loop counter
    }

    // while (i>=5)       ------> it run and exit 
    // {
    //     printf("Value of i = %d\n", i);
    //     printf("Good Morning\n");
    //     i++;
    // }
    

    return 0;
}