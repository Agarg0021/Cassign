#include <stdio.h>

int main(){ 
    int i,j;
   int a[5][5];
   for (i=0;i<5;i++)
    {
    for (j=0;j<5;j++)
    {
        a[i][j]=3*i*(i+2);
        printf("%d\n", a[i][j]);
    }
}
}
