#include <stdio.h>

int main()
{
  int arr[5] = {10,20,30,40,50};
  int *ptr;
  int i;

  ptr = arr;

  *(ptr + 3) = 100;
  for (i = 0; i < 5; i++)
  {
    printf("arr[%d]  = %d\n",i,*(ptr + i));
  }
}