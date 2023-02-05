#include <stdio.h>
void swap(int, int);
int main()
{
    int a, b;
    printf("Enter Value A & B:\n");
    scanf("%d%d", &a, &b);

    printf("Before Swapping\n");
    printf("A:%d B:%d\n", a, b);

    swap(a, b);

    printf("After Swapping\n");
    printf("A:%d B:%d\n", a, b);

    return 0;
}

void swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Local Function\n");
    printf("A:%d B:%d\n", a, b);
}