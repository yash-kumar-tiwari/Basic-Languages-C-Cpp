// file handling : rewind

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[] = {"Yash Kumar Tiwari"};

    FILE *fp;

    fp = fopen("frewind.txt", "a");

    if (fp == NULL)
    {
        printf("Can't Open File\n");
        exit(0);
    }
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
        fputc(ch[i], fp);
    }
    fclose(fp);
    printf("\n\t Data Written Successfully\n\n");

    // Now reading data from file
    char c;

    fp = fopen("frewind.txt", "r");

    if (fp == NULL)
    {
        printf("Can't Open File\n");
        exit(0);
    }
    while (1)
    {
        c = fgetc(fp);
        if (c == EOF)
            break;
        printf("%c", c);
    }
    rewind(fp);
    while (1)
    {
        c = fgetc(fp);
        if (c == EOF)
            break;
        printf("%c", c);
    }
    return 0;
}