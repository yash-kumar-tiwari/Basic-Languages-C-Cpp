// using nested for loop print rows and columns of number

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            // printf("%d", j);  //to print 1234
            printf("%d", i); // to print 1111 (1 to 4)
        }
        printf("\n");
    }

    return 0;
}

// change in outer & inner loop check

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 4; i >= 1; i--)
//     {
//         for (j = 1; j <= 4; j++) // for(j=4;j>=1;j--) -----> it is for print 4321
//         {
//             printf("%d", j); // to print 4321
             // printf("%d", i); // to print 4444
//         }
//         printf("\n");
//     }

//     return 0;
// }