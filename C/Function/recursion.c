#include <stdio.h>
int fact(int);
int main()
{
    int n, result;
    printf("Enter N Value:\n");
    scanf("%d", &n);
    result = fact(n);
    printf("Factorial: %d\n", result);

    return 0;
}

int fact(int n)
{
    int result;
    {
        if (n == 0)
            result = 1;
        else
            result = n * fact(n - 1);
    }
    return result;
}