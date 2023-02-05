// structure (struct) example

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
    
    record.id = 1;
    strcpy(record.name, "Yash Tiwari");
    record.marks = 97.9;

    // struct student record={1, "Yash Tiwari",97.9};

    printf("ID: %d\n", record.id);
    printf("Name: %s\n", record.name);
    printf("Marks: %f\n", record.marks);

    return 0;
}