#include <stdio.h>  //header file : standard input output 

int main()
{
int num, ans;      //variable declaration & initialization

printf("Enter Number: \n"); // it can be used to print message on terminal
scanf("%d", &num); // it can be used to take input and assign it to variable

ans = num*num;    // used to calculate square of a Number

printf("Answer :%d\n", ans);   // used to print output

return 0;
}