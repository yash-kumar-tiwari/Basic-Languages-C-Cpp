#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);

    printf("Before Swapping A:%d\t B:%d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping A:%d\t B:%d\n", a, b);

    return 0;
}