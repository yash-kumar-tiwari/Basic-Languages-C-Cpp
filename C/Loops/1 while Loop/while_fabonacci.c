// using while loop make a program to calculate fabonacci series
#include <stdio.h>
int main()
{
    int f1 = 0, f2 = 1, f3, length, i = 3; // initialization
    printf("Enter Length of Series: \n");
    scanf("%d", &length);
    printf("%d\t%d\t", f1, f2);

    while (i <= length) //------>condition
    {
        f3 = f1 + f2;
        printf("%d\t", f3);

        f1 = f2;
        f2 = f3;

        i++; //------> loop counter
    }
    return 0;
}