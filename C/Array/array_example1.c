// bound checking

#include <stdio.h>
int main()
{
    int i, a[8], n;
    printf("How Many Elements do you want to store\n");
    scanf("%d", &n);

    printf("Enter Array Elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Elements are:\n");

    for (i = 0; i < n; i++)
    {
        printf("Address: %u Elements at a[%d]:%d\n", &a[i], i, a[i]);
    }

    return 0;
}