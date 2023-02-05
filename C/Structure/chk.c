// nested structure - another way

#include <stdio.h>

struct student
{
    int rno;
    float per;
    struct name
    {
        char f_name[50];
        char m_name[50];
        char l_name[50];

    } nm;

} stud;

void main()
{
    printf("Enter Roll Number: ");
    scanf("%d", &stud.rno);

    printf("Enter Percentage: ");
    scanf("%f", &stud.per);

    getchar();
    printf("Enter first Name: ");
    scanf("%[^\n]s", stud.nm.f_name);
    getchar();
    printf("Enter Middle Name: ");
    scanf("%[^\n]s", stud.nm.m_name);
    getchar();
    printf("Enter Last Name: ");
    scanf("%[^\n]s", stud.nm.l_name);
    // gets(s.name);

    printf("Roll Number: %d\n", stud.rno);
    printf("Percentage: %.2f\n", stud.per);
    printf("Name: %s\n", stud.nm.f_name);
    printf("Name: %s\n", stud.nm.m_name);
    printf("Name: %s\n", stud.nm.l_name);
}