// nested if else statement to check which number is greater
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Value A, B, C :\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("A is Big\n");
        }
        else
        {
            printf("C is Big\n");
        }
    }

    else

    {
        if (b > c)
        {
            printf("B is Big\n");
        }
        else
        {
            printf("C is Big\n");
        }
    }

    return 0;
}