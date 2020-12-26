#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr;
  ptr = malloc(5 * sizeof(int));
  ptr = realloc(ptr, 2 * sizeof(int)); // reduced to 2
  ptr = realloc(ptr, 6 * sizeof(int)); // augmented to 6
}