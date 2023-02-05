// Relational Operator

#include <stdio.h>
int main()
{
    int x, y; // Variable Declaration & Initialization
    printf("Enter Value X and Y : \n");
    scanf("%d%d", &x, &y);

    printf("Result of Relational > : %d\n", x > y);
    printf("Result of Relational < : %d\n", x < y);
    printf("Result of Relational >= : %d\n", x >= y);
    printf("Result of Relational <= : %d\n", x <= y);
    printf("Result of Relational == : %d\n", x == y);
    printf("Result of Relational != : %d\n", x != y);

    return 0;
}