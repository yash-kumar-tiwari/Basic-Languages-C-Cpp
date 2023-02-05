#include <stdio.h>
int prime(int);
int main()
{
    int n;
    printf("Enter Number to Check:\n");
    scanf("%d", &n);
    prime(n);

    return 0;
}
int prime(int n)
{
    int i, flag = 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("Non Prime Number\n");
            flag == 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Prime Number\n");
    }
    return prime;
}
