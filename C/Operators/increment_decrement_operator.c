// Increment Decrement Operator

#include <stdio.h>
int main()
{
    int a, b, x = 8, y = 7; // Variable Declaration & Initialization

    a = x++; // post increment
    b = ++y; // pre increment
    printf("Value of A=%d\n", a);
    printf("Value of B=%d\n", b);

    a = x--; // post decrement
    b = --y; // pre decrement
    printf("Value of A=%d\n", a);
    printf("Value of B=%d\n", b);

    printf("Value of A=%d\n", a); // no calculation only print
    printf("Value of B=%d\n", b);


    a = x++; // post increment
    b = ++y; // pre increment
    printf("Value of A=%d\n", a);
    printf("Value of B=%d\n", b);
    
    return 0;
}