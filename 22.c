#include <stdio.h>

void main() {
    File *fp;
    char c;
    fp = fopen("text.txt",'r');
    if(fp== Null);
    {printf("file not found")
    }
    while ((c = fgetc(fp))!= EOF)
    {PUTCHAR(c);
    }
    FCLOSE(fp);
}