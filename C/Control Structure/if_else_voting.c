// if else statement to check whether eligible for voting or not
#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age :\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Yes You're eligible for Voting Rights\n");
    }
    else
    {
        printf("Sorry You're Not Eligible for Voting Rights");
    }

    return 0;
}