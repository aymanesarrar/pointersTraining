#include <stdio.h>

int* get()
{
  int i = 100;
  return &i;
}
int main()
{
  int *ptr = get();
  return 0;
}