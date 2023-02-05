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
                printf("i:%d j:%d k:%d \n", i, j, k);
                if (j == 3)
                {
                    goto out;
                }
            }
        }
    }
out:
    printf("Came Out Of Loop\n");
    printf("Good Morning User\n");

    return 0;
}