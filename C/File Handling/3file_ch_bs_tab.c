// file handling : Count Number of Character, Spaces, Tabs, Lines

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nol = 0, nob = 0, noc = 0, not = 0;
    char ch;

    FILE *fp;

    fp = fopen("file_ch_bs_tab.txt", "r");

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
        noc++;
        if (ch == " ")
            nob++;
        if (ch == '\t')
            not ++;
        if (ch == '\n')
            nol++;
    }
    fclose(fp);
    printf("\n");

    printf("No. of Character: %d\n", noc);
    printf("No. of Lines: %d\n", nol);
    printf("No. of Blank Spaces: %d\n", nob);
    printf("No. of Tabs: %d\n", not );

    return 0;
}