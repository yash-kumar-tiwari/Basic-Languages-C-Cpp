// dynamic memory allocation (malloc, calloc, realloc)
// realloc
 
#include <stdio.h>
#include <stdlib.h> //----> to  use dma

int main()
{
    int *ptr, n, i;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));   // calloc dma needed for realloc dma

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

    printf("Enter New Array Size: ");
    scanf("%d", &n);

    ptr=realloc(ptr, n*sizeof(int));    // ----> realloc dma

    if(ptr==NULL)
    {
        printf("Memory Not Allocated\n");
        exit(0);
    }
    else
    {
        printf("Memory Allocated Successfully\n");

        printf("Enter Array Elements: \n");
        for(i=0; i<n; i++)
        scanf("%d", &ptr[i]);

        printf("Elements are: ");
        for(i=0; i<n; i++)
        printf("%d\t", ptr[i]);
    }
    printf("\n");
    free(ptr);

    return 0;
}