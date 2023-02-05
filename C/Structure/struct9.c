// structure pointer with function - another way

#include <stdio.h>

struct student
{
    int rno;
    float per;
    char name[50];
};

void getdata(struct student *stud)
{
    printf("Enter Roll Number: ");
    scanf("%d", &stud->rno);

    printf("Enter Percentage: ");
    scanf("%f", &stud->per);

    getchar();
    printf("Enter Name: ");
    scanf("%[^\n]s", stud->name);
    // gets(s.name);
}

void showdata(struct student stud)
{
    printf("Roll Number: %d\n", stud.rno);
    printf("Percentage: %.2f\n", stud.per);
    printf("Name: %s\n", stud.name);
}

void main()
{
    struct student stud;
    getdata(&stud);
    showdata(stud);
}