#include <stdio.h>
int main()
{
    int i, j, row, sp;
    printf("Enter N:");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)

    {
        for (sp = 1; sp <= row - i; sp++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}