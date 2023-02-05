#include <stdio.h>

int main()
{
    int year;

    printf("Enter Year: ");
    scanf("%d", &year);

    if (year % 400 == 0) // leap year if perfectly divided by 400
    {
        printf("%d is a Leap Year", year);
    }
    // not a leap year if divisible by 100 but not divisibole by 400

    else if (year % 100 == 0)
    {
        printf("%d is not a Leap Year", year);
    }

    // leap year if not divisible by 100 but divisible by 4
    else if (year % 4 == 0)
    {
        printf("%d is a Leap Year", year);
    }
    else
        printf("%d is not a Leap Year", year); // all other years are not leap years
    return 0;
}