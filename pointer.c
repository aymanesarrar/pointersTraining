#include <stdio.h>

int main()
{
  int a = 10;
  int *ptr = &a;
  int **ptr2 = &ptr;
  printf("the value of a : %d\n",a);
  printf("the value stored at ptr : %d\n",*ptr);
  printf("Address of a %p\n",&a);
  printf("ptr points to the address %p\n",ptr);
  printf("Address of ptr : %p\n",&ptr);
  printf("Address of ptr2 : %p\n",&ptr2);
  printf("ptr2 points to the address %p\n",ptr2);
  printf("the value stored at ptr2 : %d",**ptr2);
  return 0;
}