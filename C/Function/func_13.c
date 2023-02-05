// function with argument and no return value

#include <stdio.h>

void add(int, int); // void add (int a, int b); / void add (int x, int y);

int main()
{
    int a, b;
    printf("Enter A & B Value:\n");
    scanf("%d%d", &a, &b);
    add(a, b); // actual arguments

    return 0;
}
void add(int x, int y) // formal arguments
{
    printf("Sum: %d\n", x + y);
}