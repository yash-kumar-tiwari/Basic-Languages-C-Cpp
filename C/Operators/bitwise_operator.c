// Bitwise Operator

#include <stdio.h>
int main()
{
    int a = 60, b = 13; // Variable Declaration & Initialization
    printf("Enter Value A and B : \n");
    scanf("%d%d", &a, &b);

    printf("Result of Bitwise & = : %d\n", a & b);
    printf("Result of Bitwise | : %d\n", a | b);
    printf("Result of Bitwise ^ : %d\n", a ^ b);
    printf("Result of Bitwise << = : %d\n", a << 2);
    printf("Result of Bitwise >> = : %d\n", a >> 2);

    return 0;
}