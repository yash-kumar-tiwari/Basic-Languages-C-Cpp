// nested structure - another way

#include <stdio.h>

struct student
{
    int rno;
    float per;
    struct name
    {
        char name[50];

    } nm;

} stud;

void main()
{
    printf("Enter Roll Number: ");
    scanf("%d", &stud.rno);

    printf("Enter Percentage: ");
    scanf("%f", &stud.per);

    getchar();
    printf("Enter Name: ");
    scanf("%[^\n]s", stud.nm.name);
    // gets(s.name);

    printf("Roll Number: %d\n", stud.rno);
    printf("Percentage: %.2f\n", stud.per);
    printf("Name: %s\n", stud.nm.name);
}