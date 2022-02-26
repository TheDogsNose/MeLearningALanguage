#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
   int x;
   FILE * fp;
   fp = fopen ("file.txt", "r+");

    if (fp == NULL){
        printf("error opening the file\n");
    }
    
  char c;

  fseek(fp, 28, SEEK_SET);

  c = fgetc(fp);
  printf("%c\n", c);
  c = fgetc(fp);
  printf("%c\n", c);
  c = fgetc(fp);
  printf("%c\n", c);
  c = fgetc(fp);
  printf("%c\n", c);
  
  fclose(fp);
  
  
  return 0;
}

