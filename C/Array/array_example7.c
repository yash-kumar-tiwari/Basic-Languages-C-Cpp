// counting of positive negative zero odd even number

#include <stdio.h>
int main()
{
    int a[50], i, n, pos = 0, neg = 0, zero = 0, even = 0, odd = 0;
    printf("Enter Size of the Array:\n");
    scanf("%d", &n);
    printf("Enter Array Elements\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
            pos++;
        if (a[i] < 0)
            neg++;
        if (a[i] == 0)
            zero++;
        if (a[i] % 2 == 0)
            even++;
        if (a[i] % 2 != 0)
            odd++;
    }

    printf("Count of Positive Number:%d\n", pos);
    printf("Count of Negative Number:%d\n", neg);
    printf("Count of Zero Number:%d\n", zero);
    printf("Count of Odd Number:%d\n", odd);
    printf("Count of Even Number:%d\n", even);

    return 0;
}
