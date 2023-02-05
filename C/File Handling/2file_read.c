// file handling : Read

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    FILE *fp;

    fp = fopen("file_read.txt", "r");

    if (fp == NULL)
    {
        printf("Can't Open File\n");
        exit(0);
    }
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF) // EOF= end of file
            break;
        printf("%c", ch);
    }
    fclose(fp);
    printf("\n");

    printf("\n\t Data Written Successfully\n\n");

    return 0;
}