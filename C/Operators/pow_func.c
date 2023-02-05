// POW Function

#include <stdio.h>
#include <math.h>
int main()
{
    int value, power, answer;
    printf("Enter Value :\n");
    scanf("%d", &value);

    printf("Enter Power :\n");
    scanf("%d", &power);

    answer=pow(value,power);
    printf("Answer is : %d\n", answer);

    return 0;
}           