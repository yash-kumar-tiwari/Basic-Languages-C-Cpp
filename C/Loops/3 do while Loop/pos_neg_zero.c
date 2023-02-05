// to check n Numbers which are positive negative and zeroes

#include <stdio.h>
int main()
{
    int n, pos = 0, neg = 0, zero = 0, choice;

    do
    {
        printf("Enter Number\n");
        scanf("%d", &n);

        if (n > 0)
        {
            pos++;
        }
        if (n < 0)
        {
            neg++;
        }
        if (n == 0)
        {
            zero++;
        }
        printf("Do you want to Enter More Number\n Press 1 For YES \n Press 0 For NO\n");
        scanf("%d", &choice);

    } while (choice);

    printf("Count of Positive No. : %d\n", pos);
    printf("Count of Negative No. : %d\n", neg);
    printf("Count of Zeroes : %d\n", zero);
    return 0;
}
