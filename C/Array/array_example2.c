// accessing array element using pointer

#include <stdio.h>
int main()
{
    int a[5] = {45, 67, 89, 23, 6};
    int i, *p;
    p = &a[0]; // p=a;
    printf("Elements are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Address: %u Elements at a[%d]:%d\n", &a[i], i, a[i]);
        p++;
    }

    return 0;
}