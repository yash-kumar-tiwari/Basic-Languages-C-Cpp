// using while loop make a program to calculate factorial
#include <stdio.h>
int main()
{
    int i, f=1, n; // initialization
    printf("Enter Number to Calculate Factorial: \n");
    scanf("%d", &n);

    for (i=1; i<=n; i++) //------>condition
    {
        f=f*i;
        // i++; //------> loop counter
    }

    printf("Factorial:%d\n", f);
    return 0;
}