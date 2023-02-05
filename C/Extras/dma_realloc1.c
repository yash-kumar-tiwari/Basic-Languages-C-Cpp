// program showing concept of realloc()

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, *ptr, num;
    printf("Enter Number of Elements:");
    scanf("%d", &num);

    ptr = (int *)calloc(num, sizeof(int));

    printf("Addresses of Elements: ");

    for (i = 0; i < num; i++)
    {
        printf("%p\n", ptr + i);
    }

    printf("Enter New Size:");
    scanf("%d", &num);

ptr= realloc(ptr, num*sizeof(int));

printf("\n Addresses of Newly Allocated Elements: ");
    for (i = 0; i < num; i++)
    {
        printf("%p\n", ptr + i);
    }
    free(ptr);
}