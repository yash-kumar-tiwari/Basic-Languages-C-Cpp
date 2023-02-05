// function with argument and return value

#include <stdio.h>
int add(int, int); // int add(int a, int b); / int add(int x, int y);
int main()
{
    int a, b, sum;
    printf("Enter Value A & B:\n");
    scanf("%d%d", &a, &b);
    sum = add(a, b); // actual arguments
    printf("Addition: %d\n", sum);

    return 0;
}
int add(int x, int y) // formal arguments
{
    int d;
    d = x + y;
    printf("Sum : %d\n", d);

    return d;
}