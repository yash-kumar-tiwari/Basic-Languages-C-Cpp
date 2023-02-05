// using while loop make a program to calculate simple interest
#include <stdio.h>
int main()
{
    float principle, rate, time, simple_interest, amount;
    int i = 1, n; // initialization
    printf("How Many Times You Want To Calculate Simple Interest: \n");
    scanf("%d", &n);

    while (i<=n) //------>condition
    {
        printf("Enter Principle, Rate, Time:\n");
        scanf("%f%f%f", &principle, &rate, &time);

        simple_interest = (principle * rate * time) / 100;
        amount = principle + simple_interest;

        printf("Simple Interest:%f\n", simple_interest);
        printf("Amount:%f\n", amount);
        i++; //------> loop counter
    }

    return 0;
}