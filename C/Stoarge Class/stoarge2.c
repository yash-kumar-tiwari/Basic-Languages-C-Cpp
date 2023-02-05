// External(extern Keyword) stoarge class

#include <stdio.h>
int i;
void increment();
void decrement();
int main()
{
    printf("Value of i: %d\n", i);
    increment();
    increment();
    increment();
    decrement();
    decrement();

    return 0;
}

void increment()
{
    i = i + 1;
    printf("On increment Value of i: %d\n", i);
}
void decrement()
{
    i = i - 1;
    printf("On decrement Value of i: %d\n", i);
}