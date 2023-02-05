// nested structure - another way

#include <stdio.h>

struct employee
{
    int empid;

    struct name
    {
        char f_name[50];
        char m_name[50];
        char l_name[50];
    } nm;
    struct address
    {
        char city[20];
        char state[20];
    } add;
    float salary;
} emp[20];

void main()
{
    int i, num;

    printf("Enter No. of Employees: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].empid);
        
        getchar();
        printf("Enter first Name: ");
        scanf("%[^\n]s", emp[i].nm.f_name);
        getchar();
        printf("Enter Middle Name: ");
        scanf("%[^\n]s", emp[i].nm.m_name);
        getchar();
        printf("Enter Last Name: ");
        scanf("%[^\n]s", emp[i].nm.l_name);
        // gets(s.name);

        getchar();
        printf("Enter City: ");
        scanf("%[^\n]s\n", emp[i].add.city);
        getchar();
        printf("Enter State: ");
        scanf("%[^\n]s\n", emp[i].add.state);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);

    }

    printf("\n---- Employee Details ----\n\n\n");
    printf("Emp. ID Name\t\tCity\tState\tSalary\n");

    for (i = 0; i < num; i++)
    {
        printf("\n%d\t", emp[i].empid);

        printf("%s ", emp[i].nm.f_name);
        printf("%s ", emp[i].nm.m_name);
        printf("%s\t", emp[i].nm.l_name);

        printf("%s\t", emp[i].add.city);
        printf("%s\t", emp[i].add.state);

        printf("%.2f\t", emp[i].salary);
    }

    printf("\n\n----Details Above are Subjected to Change----\n\n");
}