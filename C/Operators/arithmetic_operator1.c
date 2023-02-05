// Arithmetic Operator by declaring variables

#include <stdio.h>
int main()
{
    int a, b, sum, sub, mul, div, mod; // Variable Declaration & Initialization
    printf("Enter Value A and B : \n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("Addition = %d\n", sum);
    sub = a - b;
    printf("Subtraction = %d\n", sub);
    mul = a * b;
    printf("Multiplication = %d\n", mul);
    div = a / b;
    printf("Division = %d\n", div);
    mod = a % b;
    printf("Modulus = %d\n", mod);

    return 0;
}