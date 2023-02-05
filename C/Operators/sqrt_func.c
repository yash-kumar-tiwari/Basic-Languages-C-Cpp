//SQRT Function

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, s, area;
    printf("Enter Value A :\n");
    scanf("%d", &a);

    printf("Enter Value B :\n");
    scanf("%d", &b);

    printf("Enter Value C :\n");
    scanf("%d", &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of Triangle :%d\n", area);

    return 0;
}