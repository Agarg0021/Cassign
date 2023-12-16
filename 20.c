#include<stdio.h>
#include<stdlib.h>

  int main() {
    FILE* fp ; 
  fp = fopen("about.txt","w+");
  if(fp== NULL )
  printf(" file doesnt exist");
else 
printf("file exist");

fputs("arpit",fp);
fclose(fp);


    
}
