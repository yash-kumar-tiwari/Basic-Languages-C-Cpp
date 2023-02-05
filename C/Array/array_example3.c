// passing an array to a function

#include <stdio.h>
int result(int[], int);
int main()
{
    int num[50], n, i, avg;
    // float avg;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    avg = result(num, n);
    printf("Average:%d\n", avg);

    return 0;
}

int result(int num[50], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    return (sum / n);
}