// make program using switch to calulations of numbers
#include <stdio.h>
int main()
{
    int a, b, ans, choice;
    printf("Press 1 For Addition\n");
    printf("Press 2 For Subtraction\n");
    printf("Press 3 For Multiplication\n");
    printf("Press 4 For Division\n");
    printf("Enter Your Choice\n");
    scanf("%d", &choice);

    {
        switch (choice)
        {
        case 1:
            printf("Enter Value A and B\n");
            scanf("%d%d", &a, &b);
            ans = a + b;
            printf("Addition=%d\n", ans);
            break;

        case 2:
            printf("Enter Value A and B\n");
            scanf("%d%d", &a, &b);
            ans = a - b;
            printf("Subtraction=%d\n", ans);
            break;

        case 3:
            printf("Enter Value A and B\n");
            scanf("%d%d", &a, &b);
            ans = a * b;
            printf("Multiplication=%d\n", ans);
            break;

        case 4:
            printf("Enter Value A and B\n");
            scanf("%d%d", &a, &b);
            ans = a / b;
            printf("Division=%d\n", ans);
            break;

        default:

            printf("You Entered A Wrong Choice");
            break;
        }
    }

    return 0;
}