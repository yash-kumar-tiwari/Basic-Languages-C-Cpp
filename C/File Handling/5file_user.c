// file handling - taken from user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    char name[40];
    printf("Enter Name: ");
    scanf("%[^\n]s", name);
    printf("Enter ID: ");
    scanf("%d", &id);

    FILE *fp;

    fp = fopen("file_write.txt", "w");

    if (fp == NULL)
    {
        printf("Can't Open File\n");
        exit(0);
    }
    fprintf(fp, "Name: %s \nID: %d", name, id);

    printf("Data Written Successfully\n");

    return 0;
}