// else if statement to check result
#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, sum, percentage;
    printf("Enter Marks of All Subjects :\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    sum = m1 + m2 + m3 + m4 + m5;
    percentage = sum / 5;

    if (percentage >= 60)
    {
        printf("You Passed with First Division\n");
    }

    else if (percentage <= 60 && percentage >= 50)
    {
        printf("You Passed with Second Division\n");
    }

    else if (percentage <= 50 && percentage >= 40)
    {
        printf("You Passed with Third Division\n");
    }
    else
    {
        printf("Sorry You Does not Passed in Exam\n");
    }

    return 0;
}
