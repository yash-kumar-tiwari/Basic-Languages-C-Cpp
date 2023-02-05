// 2 dimentional array as an array of array

#include<stdio.h>
int main()
{
    int a[4][2]={{3,4},{7,8},{45,78},{9,1}};
    int i;
    for ( i = 0; i < 4; i++)
    {
        printf("Address of a[%d]th 1D Array:%u\n", i,a[i]);
    }
 return 0;
    
}