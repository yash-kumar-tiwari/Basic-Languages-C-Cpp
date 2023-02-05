// structure (struct) - User Input

#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[30];
    float marks;
} record;

int main()
{
    printf("Enter ID: ");
    scanf("%d", &record.id);
    printf("Enter Name: ");
    scanf("%s", record.name);
    printf("Enter Marks: ");
    scanf("%f", &record.marks);

    printf("ID: %d\n", record.id);
    printf("Name: %s\n", record.name);
    printf("Marks: %f\n", record.marks);

    return 0;
}