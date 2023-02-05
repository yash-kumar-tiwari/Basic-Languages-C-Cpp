// to check do while program

#include <stdio.h>
int main()
{
    int i, j, sum;
    i = 1;
    do
    {
        j = 1;
        do
        {
            sum = i + j;
            printf("i=%d j=%d sum=%d\n", i, j, sum);
            j++;
        } while (j <= 2);
            i++;
    } while (i <= 3);

        return 0;
}