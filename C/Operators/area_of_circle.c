// Area of Circle
#include <stdio.h>
const float pi = 3.14;
int main()
{
    float radius, area;
printf("Enter Radius : \n");
scanf("%f", &radius);

area = pi*radius*radius;
printf("Area of Circle = %f", area);
    return 0;
}
