// using for loop make a program to calculate simple interest
#include <stdio.h>
int main()
{
    float principle, rate, time, simple_interest, amount;
    int i, n; // initialization
    printf("How Many Times You Want To Calculate Simple Interest: \n");
    scanf("%d", &n);

    for (i=1;i<=n;i++) //------>initialization; condition; loop counter;
    {
        printf("Enter Principle, Rate, Time:\n");
        scanf("%f%f%f", &principle, &rate, &time);

        simple_interest = (principle * rate * time) / 100;
        amount = principle + simple_interest;

        printf("Simple Interest:%f\n", simple_interest);
        printf("Amount:%f\n", amount);
        // i++; //------> loop counter
    }

    return 0;
}