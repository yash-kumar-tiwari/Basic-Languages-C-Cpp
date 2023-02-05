// auto stoarge class

#include <stdio.h>
int main()
{
    auto int i = 10;
    {
        auto int i = 20;
        {
            auto int i = 30;
            printf("i=%d\n", i);
        }
        printf("i=%d\n", i);
    }
    printf("i=%d\n", i);

    return 0;
}