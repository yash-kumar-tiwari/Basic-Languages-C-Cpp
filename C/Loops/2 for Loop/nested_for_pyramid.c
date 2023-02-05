// using nested for loop print right angle & spaces before stars

#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter N Value\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = n - 1; k >= i; k--) // Space loop
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) // print loop
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// change in inner loop (upside down)

// #include <stdio.h>
// int main()
// {
//     int i, j, k, n;
//     printf("Enter N Value\n");
//     scanf("%d", &n);
//     for (i = n; i >= 1; i--)
//     {
//         for (k = n - 1; k >= i; k--) // Space loop
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= i; j++) // print loop
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }