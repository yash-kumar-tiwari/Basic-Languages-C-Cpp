// dynamic memory allocation (malloc, calloc, realloc)
// calloc 

#include <stdio.h>
#include <stdlib.h> //----> to  use dma

int main()
{
    int *ptr, n, i;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory Not Allocated\n");
        exit(0);
    }
    else
    {
        printf("Memory Allocated Successfully\n");
        printf("Enter Array Elements:\n");
        for (i = 0; i < n; i++)
            scanf("%d", &ptr[i]);

        printf("Elements are: ");
        for (i = 0; i < n; i++)
            printf("\t%d\t", ptr[i]);
    }
    printf("\n");
    return 0;
}