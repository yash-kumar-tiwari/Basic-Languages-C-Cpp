// file handling : Copy File

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    FILE *fs, *ft;

    fs = fopen("file_read.txt", "r");

    if (fs == NULL)
    {
        printf("Can't Open File\n");
        exit(1);
    }
    ft = fopen("file_read_copy.txt", "w");

    if (ft == NULL)
    {
        printf("Can't Open File\n");
        exit(2);
    }

    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF) // EOF= end of file
            break;
        fputc(ch, ft);
    }
    fclose(fs);
    fclose(ft);
    printf("\n");

    printf("\n\t File Read Operation Succeed.\n\t File Copied Successfully\n\n");

    return 0;
}