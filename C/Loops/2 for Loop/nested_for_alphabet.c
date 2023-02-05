// using nested for loop print rows and columns of alphabet

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 'A'; j <= 'E'; j++)
        {
            printf("%C", j);  //to print ABCDE
            // printf("%c", i); // to print AAAAA (A to E)
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
//     for (i = 'E'; i >= 'A'; i--)
//     {
//         for (j = 'A'; j <= 'E'; j++) // for(j='E';j>='A';j--) -----> it is for print EDCBA
//         {
//             printf("%c", j); // to print EDCBA
             // printf("%c", i); // to print EEEEE (E to A)
//         }
//         printf("\n");
//     }

//     return 0;
// }