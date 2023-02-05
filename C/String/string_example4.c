// string via using user defined function

#include <stdio.h>
int xstrlen(char *);
int main()
{
    char s1[] = "Yash Tiwari";
    int len1, len2;
    len1 = xstrlen(s1);
    len2 = xstrlen("Universal");
    printf("String: %s  Length: %d\n", s1, len1);
    printf("String: Universal  Length: %d\n", len2);

    return 0;
}
int xstrlen(char *s)
{
    int length = 0;
    while (*s != '\0')
    {
        length++;
        s++;
    }
    return length;
}