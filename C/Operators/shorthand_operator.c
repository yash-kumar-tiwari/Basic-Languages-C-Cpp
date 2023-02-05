// Short Hand Operator by declaring variables

#include <stdio.h>
int main()
{
    int a, b, sum, sub, mul, div, mod; // Variable Declaration & Initialization
    printf("Enter Value A and B : \n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    sum += 20;
    printf("Addition = %d\n", sum);
    sub = a - b;
    sub -= 5;
    printf("Subtraction = %d\n", sub);
    mul = a * b;
    mul *= 2;
    printf("Multiplication = %d\n", mul);
    div /= 2;
    div = a / b;
    printf("Division = %d\n", div);
    mod = a % b;
    mod %= 2;
    printf("Modulus = %d\n", mod);

    return 0;
}