// Program showing the concept of File Handling

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *ptr;

    char str[500];

    ptr = fopen("append.txt", "a");
    if (ptr == NULL)
    {
        printf("Error While Creating File\n");
        exit(0);
    }

    printf("Enter Content you want to insert in your file: \n");
    scanf("%[^\n]s", str);

    fprintf(ptr, "%s", str);

    printf("File Created Successfully\n");
    printf("Data Inserted Successfully\n");

    fclose(ptr);
}