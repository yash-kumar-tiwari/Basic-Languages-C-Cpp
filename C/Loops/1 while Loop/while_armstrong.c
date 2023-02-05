// using while loop make a program to calculate armstrong number
#include <stdio.h>
#include <math.h>
int main()
{
    int remainder, ans = 0, copy, number, n = 0; // initialization
    printf("Enter Number: \n");
    scanf("%d", &number);
    copy = number;

    while (copy != 0) //------>condition
    {
        copy = copy / 10;

        n++; //------> loop counter
    }
    copy = number;

    while (copy != 0)
    {
        remainder = copy % 10;
        ans = ans + pow(remainder, n);
        copy = copy / 10;
    }
    if (ans == number)
    {
        printf("Number is Armstrong\n");
    }
    else
        printf("Not Armstrong\n");

    return 0;
}