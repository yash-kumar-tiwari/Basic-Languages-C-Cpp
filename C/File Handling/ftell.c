#include <stdio.h>
int main()

{
    FILE *fp;

    int len;
    fp = fopen("ftell.txt", "r");
        fseek(fp, 0, 2);
    len = ftell(fp);
    printf("Total No. of Bytes: %d\n", len);

    return 0;
}


