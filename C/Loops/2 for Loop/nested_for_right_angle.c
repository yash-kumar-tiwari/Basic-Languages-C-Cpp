// using nested for loop print right angle 

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)  // (i = 5; i <= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*"); 
        }
        printf("\n");
    }

    return 0;
}

// change in inner loop (upside down)

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 5; j >= i; j--)
//         {
//             printf("*"); // to print 4321
//         }
//         printf("\n");
//     }

//     return 0;
// }