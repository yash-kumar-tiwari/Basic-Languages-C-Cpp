// counting of the number & number of times it appear

#include <stdio.h>
int main()
{
    int i, a[10], n, count = 0;
    printf("Enter Array Elements:");
    for (i = 0; i <10; i++)
    scanf("%d", &a[i]);

    printf("Enter Number to Search:\n");
    scanf("%d", &n);

    for (i = 0; i < 10; i++)
    {
        if (n == a[i])
            count++;
    }

    if (count > 0)
        printf("%d Present  %d times\n", n, count);

    else
        printf("Not Present\n");

    return 0;
}