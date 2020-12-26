#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr;
  ptr = malloc(sizeof(int));

  if (ptr != NULL)
    printf("memory created successfully\n");
  return 0;
}