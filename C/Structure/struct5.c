// passing structure to a function in C (By Address)

#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[30];
    float marks;
} record;

void func(struct student *record);

int main()
{
    printf("Enter ID: ");
    scanf("%d", &record.id);
    printf("Enter Name: ");
    scanf("%s", record.name);
    printf("Enter Marks: ");
    scanf("%f", &record.marks);
    func(&record);

    return 0;
}
void func(struct student *record)
{
    printf("ID: %d\n", record->id);
    printf("Name: %s\n", record->name);
    printf("Marks: %f\n", record->marks);
}