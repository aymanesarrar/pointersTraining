#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr;
  ptr = malloc(5 * sizeof(int));
  *(ptr + 0) = 10;
  *(ptr + 1) = 20;
  *(ptr + 2) = 30;
  *(ptr + 3) = 40;
  *(ptr + 4) = 50;
  free(ptr);
  return 0;
}