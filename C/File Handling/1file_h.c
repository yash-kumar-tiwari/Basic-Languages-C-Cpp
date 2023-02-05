// example of how file handling works

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[] = {"My Name is Yash Tiwari"};

    FILE *fp;

    fp = fopen("file_h.txt", "a");

    if (fp == NULL)
    {
        printf("Can't Open File\n");
        exit(0);
    }
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
        putc(ch[i], fp);
    }
    fclose(fp);
    printf("\t Data Written Successfully\n");

    return 0;
}