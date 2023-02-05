// Program showing the concept of File Handling

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *ptr;
    
    ptr = fopen("create.txt", "w");
    if (ptr == NULL)
    {
        printf("Error While Creating File\n");
        exit(0);
    }

    printf("File Created Successfully\n");
    fclose(ptr);
}