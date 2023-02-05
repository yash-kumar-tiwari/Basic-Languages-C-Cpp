// else if statement to check which character is upper case or lower case
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Value n:\n");
    scanf("%d", &n);

    if (n%5==0 && n%8==0)
    {
        printf("Divisible by Both 5 and 8\n");
    }

    else if (n%5==0)
    {
        printf("divisible by 5\n");
    }

    else if (n%8==0)
    {
        printf("divisible by 8\n");
    }
    else
    {
        printf("divisible by none\n");
    }

    return 0;
}