// String  Concatinate - pre define

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Yash ";
    char s2[50] = "Tiwari ";

    strcat(s1, s2);

    // strcat(s2, s1);

    printf("S1: %s\n", s1);
    printf("S2: %s\n", s2);

    return 0;
}