// structure Array - another way

#include <stdio.h>

struct student
{
    int rno;
    float per;
    char name[50];
};

void main()
{
    struct student stud[50];
    int i, num;

    printf("Enter Number of Students: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("\nEnter %d Student Details\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &stud[i].rno);

        printf("Enter Percentage: ");
        scanf("%f", &stud[i].per);

        getchar();
        printf("Enter Name: ");
        scanf("%[^\n]s", stud[i].name);
        // gets(s.name);
    }

    printf("\n---- Students Details ----\n\n\n");
    printf("Roll No.Name\tPercentage\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\t%s\t%.2f\n", stud[i].rno, stud[i].name, stud[i].per);
    }

    printf("\n----Details Above are Subjected to Change----\n\n");
}