// initialize integer with 10 elements and pass array to a function modify and multiply each elements by 5

#include <stdio.h>
int modify(int *);
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
    modify(a); // modify(&a[0]);

    for (i = 0; i < 10; i++)
        printf("Elements:%d\n", a[i]);

    return 0;
}

int modify(int *a)
{
    int i;
    for(i=0; i<10; i++)
    a[i]=a[i]*5;
}