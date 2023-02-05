// continue: Jump to Beginning of the loop

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 2 ; j++)
        {
            if (i == j)
                continue;
            printf("i=%d j=%d\n", i, j);
        }
    }

    return 0;
}