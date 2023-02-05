// Nested Structure

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

    printf("Enter Name: ");
    scanf("%s", emp.name);
    printf("Enter City: ");
    scanf("%s", emp.add.city);
    printf("Enter ID: ");
    scanf("%d", &emp.id);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);
    printf("Enter Pincode: ");
    scanf("%d", &emp.add.pincode);
    printf("Enter Phone Number: ");
    scanf("%ld", &emp.add.phone);

    printf("Name: %s\n", emp.name);
    printf("City: %s\n", emp.add.city);
    printf("ID: %d\n", emp.id);
    printf("Salary: %f\n", emp.salary);
    printf("Pincode: %d\n", emp.add.pincode);
    printf("Phone: %ld\n", emp.add.phone);
    return 0;
}
