//file handling - fseek

#include <stdio.h>
int main()
{

    FILE *fp;
    fp = fopen("file_read_fseek_set.txt", "w");
    fputs("Yash Kumar Tiwari\n\tA.C.P. Crime\n\tDist: Indore", fp);
    fseek(fp,32, SEEK_SET);
    fputs("Crime Branch Indore", fp);

    return 0;
}