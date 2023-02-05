// real thing

#include <stdio.h>
int main()
{
    int i, num[] = {56, 8, 91, 23, 78};

    for (i = 0; i < 5; i++)
    {
        printf("Address: %u", &num[i]);
        printf("Elements: %d %d ", num[i], *(num + i));
        printf("%d %d\n", *(i + num), i[num]);
    }

    return 0;
}