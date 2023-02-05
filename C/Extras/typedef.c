// typedef

#include <stdio.h>
int main()

{
    typedef int digit;
    digit num1, num2, sum;

    printf("Enter Number:\n");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum:%d\n", sum);

    return 0;
}