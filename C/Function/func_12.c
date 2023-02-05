// function without argument and return value

#include <stdio.h>
int add();
int main()
{
    int d;
    printf("I am going to add \n");
    d = add();
    printf("i am back with sum value\n");
    printf("sum=%d\n", d);
    // printf("sum: %d\n", add()); // alternate method
    return 0;
}
int add()
{
    int a, b, sum;
    printf("Enter Value A and B\n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("Addition=%d\n", sum);
    return sum;
}