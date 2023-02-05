// Area of Triangle
#include <stdio.h>
#include <math.h>
const float pi = 3.14;
int main()
{
    float a, b, c, s, area;
printf("Enter Side A : \n");
scanf("%f", &a);

printf("Enter Side B : \n");
scanf("%f", &b);

printf("Enter Side C : \n");
scanf("%f", &c);

s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area of Circle = %f", area);
    return 0;
}
