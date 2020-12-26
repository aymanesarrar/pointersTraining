#include <stdio.h>
int main()
{
  int arr[5] = {10,20,30,40,50};
  int *ptr;
  ptr = arr;
  for (int i = 0; i < 5; i++)
  {
    printf("&arr[%d] = %p\n",i,ptr+i);
  }
  for (int i = 0; i < 5; i++)
  {
    printf("arr[%d] = %d\n",i,*(ptr+i));
  }
}