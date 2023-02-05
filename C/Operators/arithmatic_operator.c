// Arithmetic Operator

#include <stdio.h>
int main()
{
    int a, b, sum, sub, mul, div, mod; // Variable Declaration & Initialization
    printf("Enter Value A and B : \n");
    scanf("%d%d", &a, &b);

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

    return 0;
}