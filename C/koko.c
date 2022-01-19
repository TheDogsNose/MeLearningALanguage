#include <stdio.h>

_Bool xor(_Bool x, _Bool y);

int main()
{
  /*
int a = 42;
int b = 0x2a;
int c = 052;
int d = 0b101010111;

  printf("%d\n", a);
  printf("%x\n", b);
  printf("%o\n", c);
  int i = 32;
      int lolo[32];
  while (i + 1) {

    if (d & 1)
        //printf("1");
        lolo[i] = 1;
    else
        //printf("0");
        lolo[i] = 0;

    d >>= 1;
    i--;
}
for (int i = 0; i <= 32; i++){
  printf("%d", lolo[i]);
}
printf("\n");
  return 0;*/
    int i = 20;
    for (int o = 0; o < 11; o++, i--, xor(1, 0) ){
        printf("%d\n", i);
        printf("%d\n", o);
        printf("-----------------------------\n");
    }

  
}

_Bool xor(_Bool x, _Bool y){
  _Bool b = (!(x && y) && (x || y));
  printf("%d\n", b);
  return b;
}