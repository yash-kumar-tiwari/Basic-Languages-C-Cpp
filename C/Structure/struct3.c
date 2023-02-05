// structure (struct) and Array

#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[30];
    float marks;
} record[3];

int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter ID: ");
        scanf("%d", &record[i].id);
        printf("Enter Name: ");
        scanf("%s", record[i].name);
        printf("Enter Marks: ");
        scanf("%f", &record[i].marks);
    }

       for (i = 0; i < 3; i++)
    {
        printf("ID: %d\n", record[i].id);
        printf("Name: %s\n", record[i].name);
        printf("Marks: %f\n", record[i].marks);
    }

    return 0;
}