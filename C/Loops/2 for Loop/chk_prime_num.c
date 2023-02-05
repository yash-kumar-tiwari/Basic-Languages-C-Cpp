// to calculate whether entered number is prime or non prime

#include <stdio.h>
int main()
{
    int i, n, flag = 0;
    printf("Enter Number to check :");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("Non Prime Number\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Prime Number\n");
    }

    return 0;
}