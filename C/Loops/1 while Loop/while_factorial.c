// using while loop make a program to calculate factorial
#include <stdio.h>
int main()
{
    int i=1, f=1, n; // initialization
    printf("Enter Number to Calculate Factorial: \n");
    scanf("%d", &n);

    while (i<=n) //------>condition
    {
        f=f*i;
        i++; //------> loop counter
    }

    printf("Factorial:%d\n", f);
    return 0;
}