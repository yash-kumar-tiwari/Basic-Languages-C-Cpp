// file handling (.dat) - taken from user (fwrite)

#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int id;
    char name[40];
    float salary;
} emp;

int main()
{
    printf("Enter Name: ");
    scanf("%[^\n]s", emp.name);
    printf("Enter ID: ");
    scanf("%d", &emp.id);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    FILE *fp;

    fp = fopen("file_fwrite.dat", "w");

    fwrite(&emp, sizeof(struct employee), 1, fp);
    fclose(fp);

    printf("Data Written Successfully\n");

    return 0;
}