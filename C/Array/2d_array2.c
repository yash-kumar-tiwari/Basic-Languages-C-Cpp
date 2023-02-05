// passing 2 dimensional array to a function
#include <stdio.h>
void display(int a[][2], int, int);
int main()
{
    int a[3][2], i, j;
    printf("Enter Array Elements\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    display(a, 3, 2);
    return 0;
}
void display(int a[3][2], int r, int c)
{
    int i, j;
    printf("Array Elements are:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}