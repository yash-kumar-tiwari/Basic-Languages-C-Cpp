// file handling - file to terminal

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    char name[40];

    FILE *fp;

    if (fp == NULL)
    {
        printf("Can't Open File\n");
        exit(0);
    }
    fscanf(fp, "%s%d", name, &id);

    printf("Name: %s\nID: %d\n", name, id);

    printf("Data Written Successfully\n");

    return 0;
}