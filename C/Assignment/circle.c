#include <stdio.h>
// const pi=3.14;
int main()
{
    float pi = 3.14, radius, area;

    printf("Enter Radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Area of Triangle: %f\n", area);

    return 0;
}