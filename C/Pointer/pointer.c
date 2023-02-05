#include <stdio.h>
int main()
{
    int i = 5, *p, **ptr;
    p = &i;
    ptr = &p;

    printf("Value of i: %d\n", i);
    printf("Address of i: %u\n", &i);
    printf("Value of i using *: %d\n", *(&i));

    printf("Address of Pointer p: %u\n", &p);
    printf("Value of p(Address of i): %u\n", p);
    printf("Value of i using *p: %d\n", *p);

    printf("Address of ptr: %u\n", &ptr);
    printf("Value of ptr(Address of p): %u\n", ptr);
    printf("Address of i(using *ptr): %u\n", *ptr);
    printf("Value of i(using *)  **ptr: %d\n", **ptr);
    return 0;
}