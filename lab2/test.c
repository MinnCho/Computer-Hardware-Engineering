#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
  int *p;
  int m;

  m = 9;

  p = &m;

  printf("%d\n", &p);
  printf("%d\n", &m);
  printf("%d\n", p);
  printf("%d\n", m);

  *p = *p + 1;

  printf("%d\n", &p);
  printf("%d\n", &m);
  printf("%d\n", p);
  printf("%d\n", m);
  return 0;
}
