// Nested Structure Pointer

#include <stdio.h>
#include <string.h>

struct address
{
    char city[30];
    int pincode;
    long int phone;
};

struct employee
{
    int id;
    char name[30];
    float salary;
    struct address add;
};

int main()
{
    struct employee emp;
    struct employee *ptr;
    ptr = &emp;

    printf("Enter Name: ");
    gets(emp.name);
    printf("Enter City: ");
    gets(emp.add.city);
    printf("Enter ID: ");
    scanf("%d", &ptr->id);
    printf("Enter Salary: ");
    scanf("%f", &ptr->salary);
    printf("Enter Pincode: ");
    scanf("%d", &ptr->add.pincode);
    printf("Enter Phone Number: ");
    scanf("%ld", &ptr->add.phone);

    printf("Name: %s\n", ptr->name);
    printf("City: %s\n", ptr->add.city);
    printf("ID: %d\n", ptr->id);
    printf("Salary: %f\n", ptr->salary);
    printf("Pincode: %d\n", ptr->add.pincode);
    printf("Phone: %ld\n", ptr->add.phone);
    return 0;
}
