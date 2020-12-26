#include <stdio.h>

void set(int *a)
{
  *a = 0;
  printf("Set : In set function a = %d\n",*a);
}
int main()
{
  int a = 10;
  printf("Main : Before calling set function a = %d\n",a);
  set(&a);
  printf("Main : After calling set function a = %d\n", a);
  return 0;
}