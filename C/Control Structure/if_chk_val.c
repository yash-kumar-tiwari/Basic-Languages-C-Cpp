// if statement to check value whether it is positive or not
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Value N :\n");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Entered Number is Zero\n");
    }
    if (n >= 0)
    {
        printf("Entered Number is Positive\n");
    }
    if (n <= 0)
    {
        printf("Entered Number is Negative\n");
    }

    return 0;
}