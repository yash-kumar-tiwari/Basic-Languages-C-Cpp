// structure (struct) using Pointer

#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[30];
    float marks;
};

int main()
{
    struct student record;
    struct student *ptr;
    ptr = &record;

    printf("Enter ID: ");
    scanf("%d", &ptr->id);
    printf("Enter Name: ");
    scanf("%s", ptr->name);
    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %f\n",ptr->marks);

    return 0;
}