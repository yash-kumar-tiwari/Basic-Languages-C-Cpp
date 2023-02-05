#include <stdio.h>
int main()
{
    int i, a[5];
    printf("Enter Array Elements:\n");

    for (i = 0; i <= 5; i++)
        scanf("%d", &a[i]);

    printf("Elements are:\n");

    for (i = 0; i <= 5; i++)
    {
        printf("Address: %u Elements at a[%d]:%d\n", &a[i], i, a[i]);
    }

    return 0;
}