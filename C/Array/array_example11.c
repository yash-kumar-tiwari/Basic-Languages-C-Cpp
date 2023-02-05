#include <stdio.h>
int main()
{
    int i = 78, j = 45, k = 23, l = 56, m;

    int *arr[4];
    arr[0] = &i;
    arr[1] = &j;
    arr[2] = &k;
    arr[3] = &l;

    for (m = 0; m < 4; m++)

        printf("Element:%d\n", *(arr[m]));

    printf("Address of i : %u\n", &i);
    printf("Address of j : %u\n", &j);
    printf("Address of k : %u\n", &k);
    printf("Address of i : %u\n", &l);

    for (m = 0; m < 4; m++)
        printf("Value of arr[%d]: %u\n", m, arr[m]);

    return 0;
}