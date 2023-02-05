// String  Compare - user define

#include <stdio.h>
void compare(char[], char[]);
int main()
{
    char s1[20], s2[20];
    printf("Enter 1st String:");
    gets(s1);
    printf("Enter 2nd String:");
    gets(s2);
    compare(s1, s2);

    return 0;
} 
void compare(char a[], char b[])
{
    int i = 0, f = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != b[i])
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
        printf("Both are Equal\n");
    else
        printf("Not Equal\n");
}