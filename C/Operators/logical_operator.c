// Logical Operator

#include <stdio.h>
int main()
{
    int a, b, c, d; // Variable Declaration & Initialization
    printf("Enter Value A and B : \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    printf("Result of AND && : %d\n", (a>b)&&(c<d));
    printf("Result of || : %d\n", (a>b)||(c<d));
    printf("Result of ! : %d\n", !((a>b)&&(c<d)));
    
    return 0;
}