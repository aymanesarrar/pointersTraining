#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p = malloc(2 * 4);
  p[0] = 1;
  p[1] = 2;
  free(p);
  p = NULL;
  int *q = malloc(2 * 4);
  q[0] = 100;
  q[1] = 200;
  printf("%d\t%d",p[0],p[1]);
}