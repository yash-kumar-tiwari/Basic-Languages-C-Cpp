#include <stdio.h>

int main()
{
    float height, base, area;

    printf("Enter Height: ");
    scanf("%f", &height);
    printf("Enter Base: ");
    scanf("%f", &base);

    area =(height * base)/2;

    printf("Area of Triangle: %f\n", area);

    return 0;
}