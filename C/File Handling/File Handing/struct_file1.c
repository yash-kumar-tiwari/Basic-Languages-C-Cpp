// Program showing the concept of File Handling

#include <stdio.h>
#include <stdlib.h>

struct student
{
    char str[500];
    int rno;
    float per;
    }s;

void main()
{
    FILE *ptr;

    ptr = fopen("structf.txt", "r");
    if (ptr == NULL)
    {
        printf("Error While Creating File\n");
        exit(0);
    }

    fread(&s, sizeof(struct student),1, ptr);

    printf("Roll Number: %d\n", s.rno);
    printf("Percentage: %f\n", s.per);
    printf("Name: %s\n", s.str);


    printf("Data: Data Inserted Successfully");

    fclose(ptr);
}