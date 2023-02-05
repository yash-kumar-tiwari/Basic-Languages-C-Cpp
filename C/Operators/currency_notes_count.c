// Counting Currency Notes
#include <stdio.h>
int main()
{
    int n2000, n500, n200, n100, n50, n20, n10, c5, c2, c1, number;

    printf("Enter Number :\n");
    scanf("%d", &number);

    n2000 = number / 2000;
    number = number % 2000;

    n500 = number / 500;
    number = number % 500;

    n200 = number / 200;
    number = number % 200;

    n100 = number / 100;
    number = number % 100;

    n50 = number / 50;
    number = number % 50;

    n20 = number / 20;
    number = number % 20;

    n10 = number / 10;
    number = number % 10;

    c5 = number / 5;
    number = number % 5;

    c2 = number / 2;
    number = number % 2;

    c1 = number / 1;
    number = number % 1;

    printf("%d Notes of 2000\n", n2000);
    printf("%d Notes of 500\n", n500);
    printf("%d Notes of 200\n", n200);
    printf("%d Notes of 100\n", n100);
    printf("%d Notes of 50\n", n50);
    printf("%d Notes of 20\n", n20);
    printf("%d Notes of 10\n", n10);
    printf("%d Coins of 5\n", c5);
    printf("%d Coins of 2\n", c2);
    printf("%d Coins of 1\n", c1);

    return 0;
}