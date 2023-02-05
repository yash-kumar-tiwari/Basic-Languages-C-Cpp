// Bubble Sort

#include <stdio.h>
int main()
{
    int a[20], n, i, j, temp, k, b;

    printf("Enter Size of the array\n");
    scanf("%d", &n);
    printf("Enter Array Elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (b = 0; b < n - 1; b++)
    {
        for (k = 0; k < n - 1; k++)
        {
            if (a[k] > a[k + 1])
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }

    printf("Result of Bubble Sort\n");

    for (j = 0; j < n; j++)
    {
        printf("\t%d\t", a[j]);
    }
    printf("\n");

    return 0;
}