// Selection Sort

#include <stdio.h>
int main()
{
    int a[50], n, i, j, temp, min;

    printf("Enter Size of the array\n");
    scanf("%d", &n);
    printf("Enter Array Elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {

            if (a[j] < a[min])
            {
                min = j;
            }

            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    printf("Result of Selection Sort\n");

    for (i = 0; i < n; i++)
    {
        printf("\t%d\t", a[i]);
    }
printf("\n");
    return 0;
}