#include <stdio.h>
int main()
{
    int i, j, sum;
    i = 1;
    while (i <= 3)
    {
        j = 1;
        while (j <= 2)
        {
            sum = i + j;
            printf("i:%d j:%d sum=%d\n", i, j, sum);
            j++;
        }
        i++;
    }

    return 0;
}