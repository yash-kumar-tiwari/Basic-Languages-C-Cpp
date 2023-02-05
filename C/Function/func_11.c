// function without argument and no return value

#include <stdio.h>
void add();
int main()
{
    int sum; // to check sum in main
    printf("I am going to add \n");
    add();
    // d=add;
    // printf("i am back with sum value\n");
    // printf("sum=%d\n", d);
    printf("sum=%d\n", sum);
    printf("i am back with sum value\n");
    return 0;
}
void add()
{
    int a, b, sum;
    printf("Enter Value A and B\n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("Addition=%d\n", sum);
}