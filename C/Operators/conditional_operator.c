// Conditional Operator

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Value of A and B :");
    scanf("%d%d",&a,&b);

    (a > b) ? printf("A is Big\n") : printf("B is Big\n");
    return 0;
}