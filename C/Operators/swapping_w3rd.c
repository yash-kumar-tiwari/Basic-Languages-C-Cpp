// Swapping with using third variable

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Value A and B :\n");
    scanf("%d%d", &a, &b);

    printf("Value of A and B Before Swapping:\n");
    printf("Enter Value A :%d\n", a);
    printf("Enter Value B :%d\n", b);

    c = a;
    a = b;
    b = c;

    printf("Value of A and B After Swapping:\n");
    printf("Enter Value A :%d\n", a);
    printf("Enter Value B :%d\n", b);
    return 0;
}