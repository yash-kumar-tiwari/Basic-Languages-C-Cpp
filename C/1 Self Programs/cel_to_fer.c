// celsius to fehrenheit

#include <stdio.h>
int main()
{
    int fer, cel;

    printf("Enter Celsius Temprature: ");
    scanf("%d", &cel);

    fer = (cel * 9 / 5) + 32;

    printf("Temperature in Fehrenheit: %d\n", fer);
    return 0;
}