// Program showing the concept of File Handling

#include <stdio.h>
#include <stdlib.h>

struct student
{
    char str[500];
    int rno;
    float per;
    }s={"Andrew Anderson", 107, 97.97};

void main()
{
    FILE *ptr;

    ptr = fopen("structf.txt", "w");
    if (ptr == NULL)
    {
        printf("Error While Creating File\n");
        exit(0);
    }

    fwrite(&s, sizeof(struct student),1, ptr);

    printf("Data: Data Inserted Successfully");

    fclose(ptr);
}