// Sum of Digits and Reversal of Digits

#include <stdio.h>
int main()
{
    int a, b, c, d, e, number, sum, reverse;
    printf("Enter Number :\n");
    scanf("%d", &number);

    a = number % 10;
    b = (number / 10) % 10;
    c = (number / 100) % 10;
    d = (number / 1000) % 10;
    e = number / 10000;

    sum = a + b + c + d + e;
    reverse = a * 10000 + b * 1000 + c * 100 + d * 10 + e;

    printf("Sum of Digits : %d\n", sum);
    printf("Reversal of Given Number : %d\n", reverse);


    return 0;
}