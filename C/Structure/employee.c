// nested structure - another way

#include <stdio.h>

struct employee
{
    int empid;
    float salary;
    struct name
    {
        char f_name[50];
        char m_name[50];
        char l_name[50];

    } nm;
    struct address
    {
        int h_no;
        char landmark[20];
        char city[20];
        char state[20];
        char country[20];
        int pincode;

    } add;

} emp;

void main()
{
    printf("Enter Employee ID: ");
    scanf("%d", &emp.empid);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    getchar();
    printf("Enter first Name: ");
    scanf("%[^\n]s", emp.nm.f_name);
    getchar();
    printf("Enter Middle Name: ");
    scanf("%[^\n]s", emp.nm.m_name);
    getchar();
    printf("Enter Last Name: ");
    scanf("%[^\n]s", emp.nm.l_name);
    // gets(s.name);

    printf("Enter House No: ");
    scanf("%d", &emp.add.h_no);
    getchar();
    printf("Enter Landmark: ");
    scanf("%[^\n]s\n", emp.add.landmark);
    getchar();
    printf("Enter City: ");
    scanf("%[^\n]s\n", emp.add.city);
    getchar();
    printf("Enter State: ");
    scanf("%[^\n]s\n", emp.add.state);
    getchar();
    printf("Enter Country: ");
    scanf("%[^\n]s\n", emp.add.country);
    printf("Enter Pincode: ");
    scanf("%d", &emp.add.pincode);

    printf("\nEmployee ID: %d\n", emp.empid);
    printf("Salary: %.2f\n", emp.salary);

    printf(" First Name: %s\n", emp.nm.f_name);
    printf(" Middle Name: %s\n", emp.nm.m_name);
    printf(" Last Name: %s\n", emp.nm.l_name);

    printf(" House No: %d\n", emp.add.h_no);
    printf(" Landmark: %s\n", emp.add.landmark);
    printf(" City: %s\n", emp.add.city);
    printf(" State: %s\n", emp.add.state);
    printf(" Country: %s\n", emp.add.country);
    printf(" Pincode: %d\n", emp.add.pincode);
} 