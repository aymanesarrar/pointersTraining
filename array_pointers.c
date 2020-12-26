#include <stdio.h>

int main()
{
  int arr[5] = {10,20,30,40,50};
  int i;

  for (i = 0; i < 5; i++) {
    printf("&arr[%d] = %p\n",i,arr + i);
  }
  for (i = 0; i < 5; i++) {
    printf("arr[%d] = %d\n",i,*(arr + i));
  }
}