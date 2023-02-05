// 2 dimensional array input taken from user 

#include<stdio.h>
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
    printf("Array Elements are:\n");

for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}