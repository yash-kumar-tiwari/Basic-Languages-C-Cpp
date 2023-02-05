#include <stdio.h>

void indore();
void ujjain();
void dewas();

int main()
{
    indore();
    ujjain();
    dewas();
    printf("Service Temporarily Stopped\n");
    dewas();
    ujjain();
    indore();
    ujjain();
    indore();
    printf("Service Stopped till Monday Morning\n");

    return 0;
}

void dewas()
{
    printf("Bus is in Dewas\n");
}

void indore()
{
    printf("Bus is in Indore\n");
}

void ujjain()
{
    printf("Bus is in Ujjain\n");
}