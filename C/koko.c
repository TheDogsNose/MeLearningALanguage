#include <stdio.h>

int fun();
int fun2();

int main()
{
  printf("%d\n", fun());
  int a;
  printf("%d\n", fun());
  int b;
  printf("%d\n", fun());
  int c;
  printf("%d\n", fun2());
  int d;
  printf("%d\n", fun2());
  int e;
  printf("%d\n", fun2());
  

}


int fun(){

  static int v = 0;
  v++;
  printf("%p\n", &v);
  return v;

}

int fun2(){

  int b = 0;
  b++;
  printf("%p\n", &b);
  return b;
}



