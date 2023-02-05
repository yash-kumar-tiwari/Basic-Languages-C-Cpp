#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);

    printf("Before Swapping A:%d\t B:%d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("After Swapping A:%d\t B:%d\n", a, b);

    return 0;
}