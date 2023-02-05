// using while loop make a program to calculate palindrome of number
#include <stdio.h>
int main()
{
    int number, remainder, sum=0, temp; // initialization
    printf("Enter Number: \n");
    scanf("%d", &number);
    temp = number;

    while (number> 0) //------>condition
    {
        remainder=number%10;
        sum=(sum*10)+remainder;
        number=number/10;

    }
    if (sum == temp)
    {
        printf("Palindrome\n");
    }
    else
        printf("Not a Palindrome\n");

    return 0;
}