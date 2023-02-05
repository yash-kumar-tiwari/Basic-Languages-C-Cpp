// display1 display2

#include <stdio.h>
void display1(int[], int);
void display2(int *, int);
int main()
{
    int num[] = {45, 7, 9, 3, 5, 7};
    display1(&num[0], 6);
    display2(num, 6);

    return 0;
}

void display1(int a[6], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Elements=%d\n", a[i]);
    }
}

// void display2(int *j, int n)
// {
//     int j;
//     for (j = 0; j < n; j++)
//     {
//         printf("Elements=%d\n", *j);
//         j++;
//     }
// }

void display2(int *j, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Elements=%d\n", *j);
        j++;
    }
}