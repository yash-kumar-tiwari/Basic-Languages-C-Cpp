// macro

#include <stdio.h>
#define AREA(x) (3.14 * x * x)
int main()
{
    float r1 = 2.3, r2 = 4.5, a;
    a = AREA(r1);
    printf("Area : %f\n", a);
    a = AREA(r2);
    printf("Area : %f\n", a);

    return 0;
}