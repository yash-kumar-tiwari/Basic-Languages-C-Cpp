// program showing concept of calloc()

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, *ptr, num;
    printf("Enter Number of Elements:");
    scanf("%d", &num);

    ptr = (int *)calloc(num , sizeof(int));

    printf("Enter Elements: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("\n Elements are:\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    free(ptr);
}