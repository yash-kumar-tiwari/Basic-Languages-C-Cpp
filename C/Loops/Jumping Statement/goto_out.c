// goto out: Jump to out of the loop

#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            for (k = 1; k <= 3; k++)
            {
                printf("i=%d\tj=%d\tk=%d\n", i, j, k);
                if (j == 3)
                {
                    goto out;
                }
            }
        }
    }
out:

    printf("Came Out of the Loop\n");
    printf("Good Morning\n");

        return 0;
}