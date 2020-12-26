#include <stdio.h>

int main()
{
  /* INCREMENTING AND DECREMENTING POINTER */
  // int i = 10;
  // int *ptr = &i;
  // printf("ptr = %p\n",ptr);
  // ptr++;
  // ptr--;
  // printf("ptr = %p\n",ptr);
  // printf("%d",i);
  /* POINTER ADDITION */
  // int i = 10;
  // int *ptr = &i;
  // printf("ptr : %p\n",ptr);
  // printf("ptr+1 : %p\n", ptr+1);
  // printf("ptr+2 : %p\n", ptr+2);
  /* POINTER SUBTRACTION */
  int i = 10;
  int *ptr = &i;
  printf("ptr : %p\n",ptr);
  printf("ptr+1 : %p\n", ptr-1);
  printf("ptr+2 : %p\n", ptr-2);
}