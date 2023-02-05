// enumerated

#include <stdio.h>
#include <string.h>

int main()
{
    enum department
    {
        Assembly,
        Accounts,
        Manufacturing,
        Stores
    };
    struct employee
    {
        char name[30];
        int id;
        float salary;
        enum department dept;
    };

    struct employee emp;

    strcpy(emp.name, "Yash");
    emp.id = 1;
    emp.salary = 70000;
    emp.dept = Manufacturing;

    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.salary);
    printf("Salary: %f\n", emp.salary);
    printf("Department: %d\n", emp.dept);

    if (emp.dept == Accounts)
        printf("%s is an Accountant\n", emp.name);
    else
        printf("%s is not an Accountant\n", emp.name);
    return 0;
}