// Program showing the concept of File Handling

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *ptr;

    char str[500];

    ptr = fopen("read.txt", "r");
    if (ptr == NULL)
    {
        printf("Error While Creating File\n");
        exit(0);
    }

    fscanf(ptr, "%[^\n]s", str);

    printf("Data: %s\n", str);

    fclose(ptr);
}