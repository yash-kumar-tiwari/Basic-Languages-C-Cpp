// file handling (.dat) - taken from user (fread)

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
    FILE *fp;

    fp = fopen("file_fwrite.dat", "r");

    fread(&emp, sizeof(struct employee), 1, fp);
    fclose(fp);

    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %f\n", emp.salary);

    printf("Data Written Successfully\n");

    return 0;
}