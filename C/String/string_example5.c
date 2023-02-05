// String  copy - pre define

#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "Yash Tiwari";
    char target[30];

    strcpy(target, source);

    printf("Source String: %s\t Target String: %s\n", source, target);

    return 0;
}