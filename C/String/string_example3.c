// string via using string header file

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Yash Tiwari";
    int len1, len2;
    len1 = strlen(s1);
    len2 = strlen("Universal");
    printf("String: %s  Length: %d\n", s1, len1);
    printf("String: Universal  Length: %d\n", len2);

    return 0;
}